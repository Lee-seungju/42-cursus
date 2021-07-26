/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:27:22 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:24 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_null(void)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 7);
	s[0] = '(';
	s[1] = 'n';
	s[2] = 'u';
	s[3] = 'l';
	s[4] = 'l';
	s[5] = ')';
	s[6] = '\0';
	return (s);
}

char	*ft_strdup(char *s)
{
	char	*new;
	int		len;
	int		i;

	len = 0;
	if (!s)
		return (get_null());
	while (s[len])
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_fornom1(char *s1, char *a)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	free(s1);
	return (a);
}

char	*ft_fornom(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (s2);
	else if (!s2)
		return (s1);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*a;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 || !s2)
		return (ft_fornom(s1, s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	a = ft_fornom1(s1, a);
	i = 0;
	while (s2[i])
	{
		a[s1_len + i] = s2[i];
		i++;
	}
	free(s2);
	a[s1_len + i] = '\0';
	return (a);
}
