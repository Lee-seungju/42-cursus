/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:31:46 by slee2             #+#    #+#             */
/*   Updated: 2021/07/05 20:06:27 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_slen(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] == c)
	{
		i++;
		j++;
	}
	while (str[i] && str[i] != c)
		i++;
	return (i - j);
}

int	ft_find(char *d, char c)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = 0;
	while (d[k])
	{
		if (d[k] == c && d[k + 1] != c && d[k + 1] != '\0')
			i++;
		k++;
	}
	j = 0;
	while (d[j] && d[j] == c)
		j++;
	if ((i == 0 && j == k) || (d[0] == c))
		i = i - 1;
	return (i);
}

char	*ft_ccpy(char *dest, char *src, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] && src[j] == c)
		j++;
	while (src[i + j])
	{
		dest[i] = src[i + j];
		if (src[i + j + 1] == c)
			return (&src[i + j + 2]);
		i++;
	}
	return (0);
}

char	**ft_free(char **a, char *s)
{
	int		i;
	char	**b;

	i = 0;
	if (s[0] == 0)
	{
		b = (char **)malloc(sizeof(char *) * 1);
		b[0] = 0;
		return (b);
	}
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (0);
}

char	**ft_split(char *s, char c)
{
	int		i[3];
	char	**a;

	i[2] = 0;
	if (!s)
		return (0);
	if (s[0] == 0)
		return (ft_free(0, s));
	i[1] = ft_find(s, c);
	a = (char **)malloc(sizeof(char *) * (i[1] + 2));
	if (!a)
		return (0);
	while (i[2] <= i[1])
	{
		i[0] = ft_slen(s, c);
		a[i[2]] = (char *)malloc(sizeof(char) *(i[0] + 1));
		if (!a[i[2]])
			return (ft_free(a, s));
		s = ft_ccpy(a[i[2]], s, c);
		a[i[2]][i[0]] = '\0';
		i[2]++;
	}
	a[i[2]] = 0;
	return (a);
}
