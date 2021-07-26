/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_dot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 03:05:01 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:17 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_signal(char *k)
{
	if (k[0] != '-')
		return (1);
	return (-1);
}

char	*ft_type_s(int dot, char *k)
{
	int		i;
	char	*str;

	i = 0;
	if (dot < 0)
		return (k);
	else if (dot == 0)
	{
		free(k);
		return (ft_strdup(""));
	}
	str = ft_lenstr(dot, '0');
	i = -1;
	while (++i < dot)
		str[i] = k[i];
	str[i] = '\0';
	free(k);
	return (str);
}

char	*ft_signal_minus(int dot, char *k)
{
	int		i;
	char	*str;

	str = ft_lenstr(ft_strlen(k) - 1, '0');
	i = 0;
	while (k[i + 1])
	{
		str[i] = k[i + 1];
		i++;
	}
	str[i] = '\0';
	str = ft_strjoin(ft_strdup("-"), ft_strjoin(
				ft_lenstr(dot - ft_strlen(k) + 1, '0'), str));
	free(k);
	return (str);
}

char	*ft_dot_zero(char *k, char type)
{
	if (k[0] != '0' && (type == 'd' || type == 'i'
			|| type == 'u' || type == 'x' || type == 'X'
			|| type == 'c'))
		return (k);
	else if (k[0] == '0' && (type == 'u'
			|| type == 'x' || type == 'X'))
		return (ft_strdup(""));
	else if (type != 's' && type != 'c')
		return (0);
	return (0);
}

char	*ft_display_dot(char *k, char type, int dot)
{
	int		signal;

	signal = ft_signal(k);
	if (dot == 0 && type != 'p')
		return (ft_dot_zero(k, type));
	else if (dot == 0 && type == 'p' && k[2] == '\0')
		return (ft_strdup(""));
	if ((type == 'd' && ft_strlen(k) < dot && signal == 1)
		|| (type == 'i' && ft_strlen(k) < dot && signal == 1)
		|| (type == 'u' && ft_strlen(k) < dot)
		|| (type == 'X' && ft_strlen(k) < dot)
		|| (type == 'x' && ft_strlen(k) < dot)
		|| (type == 'p' && ft_strlen(k) < dot))
		return (ft_strjoin(ft_lenstr(dot - ft_strlen(k), '0'), k));
	else if (type == 's' && ft_strlen(k) > dot)
		return (ft_type_s(dot, k));
	if ((type == 'd' && ft_strlen(k) - 1 < dot && signal == -1)
		|| (type == 'i' && ft_strlen(k) - 1 < dot && signal == -1))
		return (ft_signal_minus(dot, k));
	return (k);
}
