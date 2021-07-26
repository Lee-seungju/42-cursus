/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 22:44:38 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:46 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	check_enemy(t_game *game)
{
	int		i;
	int		j;

	j = 0;
	while (j < game->map_y)
	{
		i = 0;
		while (game->map[j][i] != '0')
			i++;
		if (i >= game->map_x)
			j++;
		else
		{
			game->enemy.y = j;
			game->enemy.x = i;
			return ;
		}
	}
	game->enemy.y = 0;
	return ;
}

void	make_enemy(t_game *game)
{
	int		i;

	i = 0;
	check_enemy(game);
	if (game->enemy.y == 0)
		return ;
	game->map[game->enemy.y][game->enemy.x] = 'A';
}
