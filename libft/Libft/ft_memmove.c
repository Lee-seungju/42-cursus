/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:41:00 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:56 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*a;
	unsigned char		*b;
	unsigned long		i;

	if (!dest && !src)
		return (0);
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i++ < num)
			a[i - 1] = b[i - 1];
	}
	else
	{
		i = num;
		while (i-- > 0)
			a[i] = b[i];
	}
	return (a);
}
