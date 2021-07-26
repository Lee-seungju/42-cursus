/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:01:13 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:39:52 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_fornom(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (s1);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*a;
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
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

int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	write(2, s, ft_strlen(s));
}

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
