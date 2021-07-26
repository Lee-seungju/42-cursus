/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:39:00 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:19 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ull_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = len + 1;
	else if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_checkm(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*a;
	int		i;

	l = ft_intlen(n);
	a = (char *)malloc(sizeof(char) * (l + 1));
	i = 1;
	if (n < 0)
		i = -1;
	else if (n == 0)
		a[0] = '0';
	a[l] = '\0';
	while (l-- > 0 && n)
	{
		a[l] = ft_checkm(n % 10) + '0';
		n = ft_checkm(n / 10);
	}
	if (i == -1)
		a[0] = '-';
	return (a);
}

char	*ft_u_display(unsigned int n)
{
	int		l;
	char	*a;

	l = ft_ull_len(n);
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (n == 0)
		a[0] = '0';
	a[l] = '\0';
	while (l-- > 0 && n)
	{
		a[l] = n % 10 + '0';
		n = n / 10;
	}
	return (a);
}
