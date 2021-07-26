/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:12:20 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:47:43 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
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
	pthread_mutex_lock(&info->dead);
	pthread_mutex_unlock(&info->dead);
	clear_info(info);
}
