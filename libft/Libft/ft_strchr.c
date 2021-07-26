/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:14:56 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*b;
	int			i;

	b = (char *)s;
	i = 0;
	while (b[i])
	{
		if (b[i] == (char)c)
			return (&b[i]);
		i++;
	}
	if (b[i] == (char)c)
		return (&b[i]);
	return (0);
}
