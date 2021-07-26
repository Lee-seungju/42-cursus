/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:45:11 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_display_zero(char *k, int width)
{
	int		i;
	int		signal;
	char	*str;

	i = -1;
	signal = ft_signal(k);
	if (ft_strlen(k) < width && signal == 1 && width > 0)
		return (ft_strjoin(ft_lenstr(width - ft_strlen(k), '0'), k));
	else if (width < 0 && ft_strlen(k) < -width)
		return (ft_strjoin(k, ft_lenstr(-width - ft_strlen(k), ' ')));
	else if (ft_strlen(k) < width && signal == -1)
	{
		str = ft_lenstr(ft_strlen(k) - 1, '0');
		while (++i < ft_strlen(k) - 1 && k[i + 1])
			str[i] = k[i + 1];
		str[i] = '\0';
		str = ft_strjoin(ft_strdup("-"), ft_strjoin(
					ft_lenstr(width - ft_strlen(k), '0'), str));
		free(k);
		return (str);
	}
	return (k);
}
