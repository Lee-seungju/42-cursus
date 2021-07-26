/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:22:04 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:54 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned long	i;

	if (!n)
		return (0);
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	i = 0;
	while (i <= n - 1)
	{
		a[i] = b[i];
		if (b[i] == (unsigned char)c)
			return (&a[i + 1]);
		i++;
	}
	return (0);
}
