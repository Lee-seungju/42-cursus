/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:12:20 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 06:31:29 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	get_fork(t_philo *philo)
{
	if (philo->index % 2 == 0)
	{
		pthread_mutex_lock(&philo->info->fork[philo->lfork]);
		display(philo, FORK);
		pthread_mutex_lock(&philo->info->fork[philo->rfork]);
		display(philo, FORK);
	}
	else if (philo->index % 2 == 1)
	{
		pthread_mutex_lock(&philo->info->fork[philo->rfork]);
		display(philo, FORK);
		pthread_mutex_lock(&philo->info->fork[philo->lfork]);
		display(philo, FORK);
	}
}

void	eat(t_philo *philo)
{
	pthread_mutex_lock(&philo->take);
	philo->eat_status = 1;
	philo->start = get_time();
	display(philo, EAT);
	philo->eat_count++;
	if (philo->eat_count == philo->info->must_eat)
	{
		printf("%d eat all\n", philo->index);
		philo->info->count++;
	}
	philo->eat_limit = philo->start + philo->info->die;
	ft_usleep(philo->info->eat);
	philo->eat_status = 0;
	pthread_mutex_unlock(&philo->take);
}

void	sleeping(t_philo *philo)
{
	display(philo, SLEEP);
	pthread_mutex_unlock(&philo->info->fork[philo->lfork]);
	pthread_mutex_unlock(&philo->info->fork[philo->rfork]);
	ft_usleep(philo->info->sleep);
	display(philo, THINKING);
}

void	*something(void *data)
{
	t_philo		*philo;
	pthread_t	id;

	philo = (t_philo *)data;
	philo->info->start = get_time();
	philo->start = get_time();
	philo->eat_limit = philo->start + philo->info->die;
	if (pthread_create(&id, 0, is_alive, data) != 0)
		return (monitor_error(philo->info, "pthread error\n"));
	pthread_detach(id);
	while (1)
	{
		get_fork(philo);
		eat(philo);
		sleeping(philo);
		usleep(100);
	}
	return ((void *)0);
}

int	make_thread(t_info *info)
{
	int		i;
	void	*philo;

	i = 0;
	pthread_mutex_init(&info->printf, 0);
	pthread_mutex_init(&info->dead, 0);
	pthread_mutex_lock(&info->dead);
	philo = (void *)info;
	while (i < info->n_of_philo)
	{
		philo = (void *)(&info->philo[i]);
		if (pthread_create(&info->id[i], 0, something, philo) != 0)
			return (pthread_error(info, "pthread error\n"));
		pthread_detach(info->id[i]);
		usleep(100);
		i++;
	}
	return (1);
}
