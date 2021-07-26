/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:07:54 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:05 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*a;
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < s1_len)
	{
		a[i] = s1[i];
		i++;
	}
	while (i - s1_len < s2_len)
	{
		a[i] = s2[i - s1_len];
		i++;
	}
	a[i] = '\0';
	return (a);
}
