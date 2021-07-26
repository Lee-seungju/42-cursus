/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_cnull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:54:34 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:14 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write(char *k, int i)
{
	while (k[i])
	{
		write(1, &k[i], 1);
		i++;
	}
	return (i);
}

int	ft_width(char *k)
{
	write(1, "\0", 1);
	free(k);
	return (0);
}

int	ft_minus_width(t_options *opt, char *k)
{
	int	i;

	i = 0;
	opt->width = -opt->width;
	k = ft_strjoin(k, ft_lenstr(opt->width - ft_strlen(k), ' '));
	i += 1;
	write(1, "\0", 1);
	i = ft_write(k, i);
	free(k);
	return (i - 1);
}

int	ft_display_cnull(t_options *opt, char *k)
{
	int		i;

	i = 0;
	if (opt->width == 0)
		return (ft_width(k));
	else if (opt->minus == 1 && opt->width > 0)
	{
		k = ft_display_minus(ft_strjoin(ft_lenstr(
						opt->width - ft_strlen(k), ' '), k), ft_strlen(k));
		write(1, "\0", 1);
		i += 1;
		return (ft_write(k, i) - 1);
	}
	else if (opt->width > 0)
	{
		k = ft_strjoin(ft_lenstr(opt->width - ft_strlen(k), ' '), k);
		i += 1;
		i = ft_write(k, i);
		write(1, "\0", 1);
		free(k);
		return (i - 1);
	}
	else if (opt->width < 0)
		return (ft_minus_width(opt, k));
	return (0);
}
