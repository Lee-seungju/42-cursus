/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:00:10 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:38:56 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	*ft_strdup(char *s)
{
	char		*new;
	int			len;
	int			i;

	len = 0;
	while (s[len])
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*a;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (ft_fornom(s1, s2));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!a)
		return (0);
	j = -1;
	while (s1[++j])
		a[j] = s1[j];
	free(s1);
	i = -1;
	while (s2[++i])
		a[j + i] = s2[i];
	a[j + i] = '\0';
	return (a);
}
