/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:32:21 by slee2             #+#    #+#             */
/*   Updated: 2021/07/22 14:47:31 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	init_philo(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->n_of_philo)
	{
		info->philo[i].eat_limit = info->eat;
		info->philo[i].index = i;
		info->philo[i].eat_count = 0;
		info->philo[i].eat_status = 0;
		info->philo[i].lfork = i;
		info->philo[i].rfork = (i + 1) % info->n_of_philo;
		info->philo[i].info = info;
		info->philo[i].take_dup = ft_dup(i, info);
		info->philo[i].take = ft_sem_open(info->philo[i].take_dup, 1);
		i++;
	}
	info->fork = ft_sem_open("fork", info->n_of_philo);
	info->printf = ft_sem_open("printf", 1);
	info->dead = ft_sem_open("dead", 1);
	info->eat_check = ft_sem_open("eat_check", 0);
	info->dead_eat_check = ft_sem_open("check", 1);
}

int	do_atoi(t_info *info, char **argv, int argc)
{
	info->someonedie = 0;
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
		one_error(info, "malloc error\n");
	info->id = malloc(sizeof(pthread_t) * info->n_of_philo);
	if (!info->id)
		two_error(info, "malloc error\n");
	info->monitor = malloc(sizeof(pthread_t) * info->n_of_philo);
	if (!info->monitor)
		three_error(info, "malloc error\n");
	init_philo(info);
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
		sem_close(info->philo[i].take);
		sem_unlink(info->philo[i].take_dup);
		free(info->philo[i].take_dup);
		kill(info->id[i], SIGKILL);
		sem_post(info->eat_check);
		i++;
	}
	clear_info_sub(info);
}
