/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:33:59 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:48 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move(t_game *game, int x, int y)
{
	if (game->map[game->start.y + y][game->start.x + x] == 'C')
		game->item.item++;
	if (game->map[game->start.y + y][game->start.x + x] == 'A')
	{
		ft_putstr("You Lose\n");
		mlx_destroy_window(game->mlx, game->mlx_win);
		malloc_free(game->map);
	}
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
	}
}

void	enemy_move(t_game *game, int x, int y)
{
	if (game->map[game->enemy.y + y][game->enemy.x + x] != '1' &&
			game->map[game->enemy.y + y][game->enemy.x + x] != 'E' &&
			game->map[game->enemy.y + y][game->enemy.x + x] != 'C' &&
			game->map[game->enemy.y + y][game->enemy.x + x] != 'P')
	{
		game->map[game->enemy.y][game->enemy.x] = '0';
		game->map[game->enemy.y + y][game->enemy.x + x] = 'A';
		game->enemy.y += y;
		game->enemy.x += x;
	}
}

void	enemy_movecase(t_game *game)
{
	if (game->enemy.count % 4 == 1)
		enemy_move(game, -1, 0);
	else if (game->enemy.count % 4 == 2)
		enemy_move(game, 1, 0);
	else if (game->enemy.count % 4 == 3)
		enemy_move(game, 0, -1);
	else if (game->enemy.count % 4 == 0)
		enemy_move(game, 0, 1);
	return ;
}

int	key_press(int keycode, t_game *game)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(game->mlx, game->mlx_win);
		malloc_free(game->map);
	}
	if (keycode == LEFT || keycode == RIGHT
		|| keycode == UP || keycode == DOWN)
		enemy_movecase(game);
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
