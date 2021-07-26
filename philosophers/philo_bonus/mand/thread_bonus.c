/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:12:20 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:42:25 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	get_fork(t_philo *philo)
{
	sem_wait(philo->info->fork);
	display(philo, FORK);
	sem_wait(philo->info->fork);
	display(philo, FORK);
}

void	eat(t_philo *philo)
{
	sem_wait(philo->take);
	philo->eat_status = 1;
	philo->start = get_time();
	display(philo, EAT);
	philo->eat_count++;
	if (philo->eat_count == philo->info->must_eat)
	{
		printf("%d eat all\n", philo->index);
		sem_post(philo->info->eat_check);
	}
	philo->eat_limit = philo->start + philo->info->die;
	ft_usleep(philo->info->eat);
	philo->eat_status = 0;
	sem_post(philo->take);
}

void	sleeping(t_philo *philo)
{
	display(philo, SLEEP);
	sem_post(philo->info->fork);
	sem_post(philo->info->fork);
	ft_usleep(philo->info->sleep);
	display(philo, THINKING);
}

void	something(t_philo *philo)
{
	pthread_t	id;
	void		*data;

	data = (void *)philo;
	philo->info->start = get_time();
	philo->start = get_time();
	philo->eat_limit = philo->start + philo->info->die;
	if (pthread_create(&id, 0, is_alive, data) != 0)
		monitor_error(philo->info, "pthread error\n");
	pthread_detach(id);
	while (1)
	{
		get_fork(philo);
		eat(philo);
		sleeping(philo);
		usleep(100);
	}
}

int	make_thread(t_info *info)
{
	int			i;
	void		*data;
	pthread_t	id;

	i = 0;
	data = (void *)info;
	sem_wait(info->dead);
	while (i < info->n_of_philo)
	{
		info->id[i] = fork();
		if (info->id[i] < 0)
			return (fork_error(info, "fork error\n"));
		if (info->id[i] == 0)
			something(&info->philo[i]);
		usleep(100);
		i++;
	}
	if (pthread_create(&id, 0, eat_check, data) != 0)
		return (fork_error(info, "pthread error\n"));
	pthread_detach(id);
	return (1);
}
