/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:29:00 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:55:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*is_alive(void *data)
{
	t_philo	*philo;
	int		i;

	i = 0;
	philo = (t_philo *)data;
	while (1)
	{
		sem_wait(philo->take);
		if (!philo->eat_status && get_time() > philo->eat_limit)
		{
			display(philo, DEAD);
			sem_close(philo->info->eat_check);
			sem_post(philo->info->dead);
			break ;
		}
		sem_post(philo->take);
	}
	return ((void *)0);
}

void	display(t_philo *philo, int cmd)
{
	long	time;

	sem_wait(philo->info->printf);
	time = get_time() - philo->info->start;
	if (philo->info->someonedie == 0 && cmd == FORK)
		printf("%ld %d has taken a fork\n", time, philo->index);
	else if (philo->info->someonedie == 0 && cmd == EAT)
		printf("%ld %d is eating\n", time, philo->index);
	else if (philo->info->someonedie == 0 && cmd == THINKING)
		printf("%ld %d is thinking\n", time, philo->index);
	else if (cmd == DEAD)
	{
		printf("%ld %d died\n", time, philo->index);
		return ;
	}
	else if (philo->info->someonedie == 0 && cmd == SLEEP)
		printf("%ld %d is sleeping\n", time, philo->index);
	else if (philo->info->someonedie == 0 && cmd == ALLEAT)
	{
		printf("All finished eating\n");
		return ;
	}
	else
		return ;
	sem_post(philo->info->printf);
}

void	ft_usleep(int delay)
{
	long long	target;

	target = get_time() + delay;
	while (target > get_time())
		usleep(100);
}

int	error(char *s)
{
	write(2, s, ft_strlen(s));
	return (0);
}

long	get_time(void)
{
	struct timeval		time;

	gettimeofday(&time, 0);
	return (time.tv_usec / 1000 + time.tv_sec * 1000);
}
