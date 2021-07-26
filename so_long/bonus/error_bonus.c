/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 16:53:17 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:47 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	error(void)
{
	perror("Error\n");
	exit(1);
}

void	malloc_error(int i, char **map)
{
	if (i == 0)
	{
		while (i < count_y(map))
		{
			free(map[i]);
			i++;
		}
		free(map);
		error();
	}
	while (i-- > 0)
		free(map[i]);
	free(map);
	error();
}

void	malloc_free(char **map)
{
	int		i;

	i = 0;
	while (i < count_y(map))
	{
		free(map[i]);
		i++;
	}
	free(map);
	exit(0);
}
