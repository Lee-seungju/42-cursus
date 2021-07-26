/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:42:08 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned long	i;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)source;
	if (a == 0 && b == 0)
		return (0);
	while (i < num)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
