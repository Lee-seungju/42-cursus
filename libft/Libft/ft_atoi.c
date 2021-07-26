/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:30:23 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:36 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long	ft_chl(unsigned long long k, int *m)
{
	m[1] = 0;
	if (k > 9223372036854775807 && m[0] == 1)
	{
		m[1] = 1;
		return (-1);
	}
	else if (k > 9223372036854775807 && m[0] == -1)
	{
		m[1] = 1;
		return (0);
	}
	return (k);
}

int	ft_atoi(const char *nptr)
{
	unsigned long long		k;
	int						m[2];

	m[0] = 1;
	k = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			m[0] = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		k = k * 10 + *nptr - '0';
		k = ft_chl(k, m);
		if ((k == 0 && m[1] == 1)
			|| (k == (unsigned long long) - 1
				&& m[1] == 1))
			break ;
		nptr++;
	}
	return (m[0] * k);
}
