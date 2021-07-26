/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:33:59 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:41:04 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move(t_game *game, int x, int y)
{
	if (game->map[game->start.y + y][game->start.x + x] == 'C')
		game->item.item++;
	if (game->map[game->start.y + y][game->start.x + x] == 'E')
	{
		if (game->item.item == game->item.max)
		{
			ft_putstr("You Win\n");
			mlx_destroy_window(game->mlx, game->mlx_win);
			malloc_free(game->map);
		}
	}
	else
	{
		game->map[game->start.y][game->start.x] = '0';
		game->map[game->start.y + y][game->start.x + x] = 'P';
		game->walk.walk++;
		game->start.y += y;
		game->start.x += x;
		draw_walk(game, game->walk.walk);
	}
}

int	key_press(int keycode, t_game *game)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(game->mlx, game->mlx_win);
		malloc_free(game->map);
	}
	if (keycode == LEFT && game->map[game->start.y][game->start.x - 1] != '1')
		move(game, -1, 0);
	if (keycode == RIGHT && game->map[game->start.y][game->start.x + 1] != '1')
		move(game, 1, 0);
	if (keycode == UP && game->map[game->start.y - 1][game->start.x] != '1')
		move(game, 0, -1);
	if (keycode == DOWN && game->map[game->start.y + 1][game->start.x] != '1')
		move(game, 0, 1);
	return (0);
}
