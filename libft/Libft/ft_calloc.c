/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:32:29 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:30:39 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*a;
	size_t		i;

	i = 0;
	a = (char *)malloc(nmemb * size);
	if (!a)
		return (0);
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
