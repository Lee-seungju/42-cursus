/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:24:02 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:48:27 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	one_error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	free(info->philo);
	free(info);
	return (0);
}

int	two_error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	free(info->philo);
	free(info->fork);
	free(info);
	return (0);
}

int	three_error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	free(info->philo);
	free(info->fork);
	free(info->id);
	free(info);
	return (0);
}

void	*monitor_error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	clear_info(info);
	return (0);
}

int	pthread_error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	clear_info(info);
	return (0);
}
