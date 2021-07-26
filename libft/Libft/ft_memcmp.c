/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:44:41 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:55 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	if (n == 0)
		return (0);
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (a1[i] < a2[i])
			return (a1[i] - a2[i]);
		else if (a1[i] > a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (a1[i] - a2[i]);
}
