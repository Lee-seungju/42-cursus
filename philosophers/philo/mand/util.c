/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:32:21 by slee2             #+#    #+#             */
/*   Updated: 2021/07/22 15:16:03 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_philo(t_info *info)
{
	int	i;

	i = 0;
	info->id = malloc(sizeof(pthread_t) * info->n_of_philo);
	if (!info->id)
		return (two_error(info, "malloc error"));
	info->monitor = malloc(sizeof(pthread_t) * info->n_of_philo);
	if (!info->monitor)
		return (three_error(info, "malloc error"));
	while (i < info->n_of_philo)
	{
		info->philo[i].eat_limit = info->eat;
		info->philo[i].index = i;
		info->philo[i].eat_count = 0;
		info->philo[i].eat_status = 0;
		info->philo[i].lfork = i;
		info->philo[i].rfork = (i + 1) % info->n_of_philo;
		info->philo[i].info = info;
		pthread_mutex_init(&info->fork[i], 0);
		pthread_mutex_init(&info->philo[i].take, 0);
		i++;
	}
	return (1);
}

int	do_atoi(t_info *info, char **argv, int argc)
{
	int	i;

	i = 0;
	info->count = 0;
	info->n_of_philo = ft_atoi(argv[1]);
	info->die = ft_atoi(argv[2]);
	info->eat = ft_atoi(argv[3]);
	info->sleep = ft_atoi(argv[4]);
	if (argc == 6)
		info->must_eat = ft_atoi(argv[5]);
	else
		info->must_eat = -1;
	info->philo = malloc(sizeof(t_philo) * info->n_of_philo);
	if (!info->philo)
		return (error(info, "malloc error"));
	info->fork = malloc(sizeof(pthread_mutex_t) * info->n_of_philo);
	if (!info->philo || !info->fork)
		return (one_error(info, "malloc error"));
	if (!init_philo(info))
		return (0);
	return (1);
}

int	get_argv(t_info *info, char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '+')
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (do_atoi(info, argv, argc));
}

int	ft_atoi(char *str)
{
	int	k;
	int	m;
	int	count;

	k = 0;
	m = 1;
	count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m = -1 * m;
		str++;
		count++;
	}
	while (*str >= '0' && *str <= '9')
	{
		k = k * 10 + *str - '0';
		str++;
	}
	if (*str != '\0' || count >= 2)
		m = 0;
	return (m * k);
}

void	clear_info(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->n_of_philo)
	{
		pthread_mutex_destroy(&info->fork[i]);
		pthread_mutex_destroy(&info->philo[i].take);
		i++;
	}
	pthread_mutex_destroy(&info->dead);
	pthread_mutex_destroy(&info->printf);
	free(info->id);
	free(info->monitor);
	free(info);
}
