/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:01:15 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:11 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[i])
		return ((char *)&s1[i]);
	while (i < size && s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && i + j < size)
			{
				if (!s2[j + 1])
					return ((char *)&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
