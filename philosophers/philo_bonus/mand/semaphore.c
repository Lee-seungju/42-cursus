/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semaphore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 08:26:03 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:49:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

sem_t	*ft_sem_open(char const *name, int value)
{
	sem_unlink(name);
	return (sem_open(name, O_CREAT | O_EXCL, 0644, value));
}

void	error_dup(int i, t_info *info)
{
	int	k;

	k = 0;
	while (k < i)
	{
		free(info->philo[i].take_dup);
		k++;
	}
	error("malloc error\n");
	free(info->monitor);
	free(info->id);
	free(info->philo);
	free(info);
	exit(0);
}

char	*ft_dup(int i, t_info *info)
{
	char	*str;
	int		len;
	int		j;

	j = i;
	len = 1;
	while (j >= 10)
	{
		len++;
		j /= 10;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		error_dup(i, info);
	j = 0;
	while (i >= 10)
	{
		str[j] = i % 10 + '0';
		i /= 10;
		j++;
	}
	str[j] = i % 10 + '0';
	str[j + 1] = '\0';
	return (str);
}

void	clear_info_sub(t_info *info)
{
	sem_close(info->fork);
	sem_close(info->dead);
	sem_close(info->eat_check);
	sem_unlink("eat_check");
	sem_unlink("fork");
	sem_unlink("dead");
	sem_post(info->printf);
	sem_close(info->printf);
	sem_unlink("printf");
	free(info->philo);
	free(info->id);
	free(info->monitor);
	free(info);
	exit(0);
}
