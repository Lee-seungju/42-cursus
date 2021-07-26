/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:24:02 by slee2             #+#    #+#             */
/*   Updated: 2021/07/22 14:45:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	one_error(t_info *info, char *s)
{
	error(s);
	free(info);
	exit(0);
}

void	two_error(t_info *info, char *s)
{
	error(s);
	free(info->philo);
	free(info);
	exit(0);
}

void	three_error(t_info *info, char *s)
{
	error(s);
	free(info->philo);
	free(info->id);
	free(info);
	exit(0);
}

void	monitor_error(t_info *info, char *s)
{
	error(s);
	clear_info(info);
	exit(0);
}

int	fork_error(t_info *info, char *s)
{
	error(s);
	clear_info(info);
	exit(0);
}
