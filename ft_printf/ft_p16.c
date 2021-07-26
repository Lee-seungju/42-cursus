/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:30:33 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:20 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	transs_16(unsigned long long a)
{
	if (a >= 10)
		return (a - 10 + 'a');
	return (a + '0');
}

char	*ft_p16(unsigned long long price)
{
	char					*str;
	unsigned long long		l_price;
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
		str[--i] = transs_16(price % 16);
		price = price / 16;
	}
	return (str);
}
