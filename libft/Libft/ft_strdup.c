/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:00:20 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	char	*b;
	int		len;
	int		i;

	len = 0;
	a = (char *)s;
	while (a[len])
		len++;
	b = (char *)malloc(sizeof(char) * (len + 1));
	if (!b)
		return (0);
	i = 0;
	while (a[i])
	{
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
