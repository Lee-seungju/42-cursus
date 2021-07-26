/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:12:20 by slee2             #+#    #+#             */
/*   Updated: 2021/07/22 14:38:58 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*eat_check(void *data)
{
	t_info	*info;
	int		i;

	info = (t_info *)data;
	i = 0;
	if (info->must_eat != -1)
	{
		while (i < info->n_of_philo)
		{
			sem_wait(info->eat_check);
			i++;
		}
		if (info->someonedie == 1)
			return ((void *)0);
		display(info->philo, ALLEAT);
		sem_post(info->dead);
	}
	return ((void *)0);
}

int	main(int argc, char **argv)
{
	t_info		*info;

	info = malloc(sizeof(t_info));
	if ((argc != 5 && argc != 6)
		|| get_argv(info, argv, argc) == 0)
		return (0);
	if (!(make_thread(info)))
		return (0);
	sem_wait(info->dead);
	info->someonedie = 1;
	clear_info(info);
}
