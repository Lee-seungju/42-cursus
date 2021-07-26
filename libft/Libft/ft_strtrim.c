/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:25:38 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:12 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_aaa(int i)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * i);
	if (!a)
		return (0);
	a[0] = 0;
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		d;

	if (!s1)
		return (0);
	if (s1[0] == 0)
		return (ft_aaa(1));
	a = 0;
	d = ft_strlen(s1);
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (s1[d - 1] && ft_strchr(set, s1[d - 1]) && d > a)
		d--;
	if (d - a == 0)
		return (ft_aaa(1));
	return (ft_substr(s1, a, d - a));
}
