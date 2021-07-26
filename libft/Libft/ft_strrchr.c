/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:48:39 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*b;
	int		i;

	a = (char)c;
	b = (char *)s;
	i = 0;
	while (b[i])
		i++;
	while (i >= 0)
	{
		if (b[i] == a)
			return (&b[i]);
		i--;
	}
	return (0);
}
