/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:05:21 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:21 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_take_number(const char *format, int *pos, int price)
{
	while (format[pos[0] + 1] >= '0' && format[pos[0] + 1] <= '9')
	{
		pos[0]++;
		price = price * 10;
		price = price + format[pos[0]] - '0';
	}
	return (price);
}

int	check_type(const char *format, int *pos)
{
	if (format[pos[0]] == 'c' || format[pos[0]] == 's'
		|| format[pos[0]] == 'p' || format[pos[0]] == 'd'
		|| format[pos[0]] == 'i' || format[pos[0]] == 'u'
		|| format[pos[0]] == 'x' || format[pos[0]] == 'X'
		|| format[pos[0]] == '%')
		return (-1);
	return (1);
}

char	*ft_str_c_dup(int a)
{
	char	*k;

	k = (char *)malloc(sizeof(char) * 2);
	k[0] = a;
	k[1] = '\0';
	return (k);
}

char	*ft_lenstr(int len, char a)
{
	int		i;
	char	*str;

	i = 0;
	if (!len)
		return (0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		str[i] = a;
		i++;
	}
	str[i] = '\0';
	return (str);
}
