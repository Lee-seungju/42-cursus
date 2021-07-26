/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:29:00 by slee2             #+#    #+#             */
/*   Updated: 2021/07/22 15:15:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*is_alive(void *data)
{
	t_philo	*philo;
	int		i;

	i = 0;
	philo = (t_philo *)data;
	while (1)
	{
		pthread_mutex_lock(&philo->take);
		if (!philo->eat_status && get_time() > philo->eat_limit)
		{
			display(philo, DEAD);
			pthread_mutex_unlock(&philo->info->dead);
			break ;
		}
		else if (philo->info->must_eat != -1
			&& philo->info->count == philo->info->n_of_philo)
		{
			display(philo, ALLEAT);
			pthread_mutex_unlock(&philo->info->dead);
		}
		pthread_mutex_unlock(&philo->take);
	}
	return ((void *)0);
}

void	display(t_philo *philo, int cmd)
{
	long	time;

	pthread_mutex_lock(&philo->info->printf);
	time = get_time() - philo->info->start;
	if (cmd == FORK)
		printf("%ld %d has taken a fork\n", time, philo->index);
	else if (cmd == EAT)
		printf("%ld %d is eating\n", time, philo->index);
	else if (cmd == THINKING)
		printf("%ld %d is thinking\n", time, philo->index);
	else if (cmd == DEAD)
	{
		printf("%ld %d died\n", time, philo->index);
		return ;
	}
	else if (cmd == SLEEP)
		printf("%ld %d is sleeping\n", time, philo->index);
	else if (cmd == ALLEAT)
	{
		printf("All finished eating\n");
		return ;
	}
	else
		return ;
	pthread_mutex_unlock(&philo->info->printf);
}

void	ft_usleep(int delay)
{
	long long	target;

	target = get_time() + delay;
	while (target > get_time())
		usleep(100);
}

int	error(t_info *info, char *s)
{
	write(2, s, ft_strlen(s));
	free(info);
	return (0);
}

long	get_time(void)
{
	struct timeval		time;

	gettimeofday(&time, 0);
	return (time.tv_usec / 1000 + time.tv_sec * 1000);
}
