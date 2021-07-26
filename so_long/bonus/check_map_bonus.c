/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:23:38 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:44 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_updown(char **map)
{
	int		i;
	int		y;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != '1')
			malloc_error(0, map);
		i++;
	}
	i = 0;
	y = count_y(map);
	while (map[y][i])
	{
		if (map[y][i] != '1')
			malloc_error(0, map);
		i++;
	}
}

void	check_map(char **map)
{
	int		y;
	int		max_x;

	y = 0;
	max_x = ft_strlen(map[0]);
	check_updown(map);
	while (map[y][0] != '\0')
	{
		if (map[y][0] == '1' && map[y][max_x - 1] == '1')
			y++;
		else
			malloc_error(0, map);
	}
}
