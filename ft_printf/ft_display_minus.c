/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:49:32 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:18 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_display_minus(char *k, int s_len)
{
	int		i;
	int		j;
	char	*a;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(k);
	a = (char *)malloc(sizeof(char) * (len + 1));
	a[len] = '\0';
	while (i < s_len)
	{
		a[i] = k[len - s_len + i];
		i++;
	}
	while (i < len)
	{
		a[i] = ' ';
		i++;
	}
	free(k);
	return (a);
}
