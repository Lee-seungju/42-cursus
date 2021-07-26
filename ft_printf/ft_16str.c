/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_16str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:30:33 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	trans_16(unsigned int a, char type)
{
	if (type == 'x' && a >= 10)
		return (a - 10 + 'a');
	else if (type == 'X' && a >= 10)
		return (a - 10 + 'A');
	return (a + '0');
}

char	*ft_16str(char type, unsigned int price)
{
	char					*str;
	unsigned int			l_price;
	int						i;

	i = 0;
	if (!price)
		return (ft_strdup("0"));
	l_price = price;
	while (l_price)
	{
		l_price = l_price / 16;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	while (price)
	{
		str[--i] = trans_16(price % 16, type);
		price = price / 16;
	}
	return (str);
}
