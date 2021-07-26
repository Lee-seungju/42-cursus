/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:57:01 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:09 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	size_t	l;
	size_t	i;

	if (!s || !f)
		return (0);
	l = ft_strlen(s);
	a = (char *)malloc(sizeof(char) * (l + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < l)
	{
		a[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
