/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:35:39 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:31:13 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_rstrlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_ifns(char *a)
{
	a = (char *)malloc(sizeof(char) * 1);
	if (!a)
		return (0);
	a[0] = 0;
	return (a);
}

size_t	ft_iflen(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i])
		i++;
	if (i < len)
		return (i);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	unsigned int	i;

	a = 0;
	if (!(s))
		return (0);
	if (ft_rstrlen(s) <= start)
		return (ft_ifns(a));
	a = (char *)malloc(sizeof(char) * (ft_iflen(s, start, len) + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
