/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xpm_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:05:04 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:53 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	xpm(t_game *game)
{
	game->wall.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/wall.xpm", &game->wall.width, &game->wall.height);
	game->item.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/item.xpm", &game->item.width, &game->item.height);
	game->exit.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/exit.xpm", &game->exit.width, &game->exit.height);
	game->start.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/character.xpm", &game->start.width, &game->start.height);
	game->enemy.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/enemy.xpm", &game->enemy.width, &game->enemy.height);
	game->back.img = mlx_xpm_file_to_image(game->mlx,
			"./xpm/background.xpm", &game->back.width, &game->back.height);
	game->item.img1 = mlx_xpm_file_to_image(game->mlx,
			"./xpm/item1.xpm", &game->item.width, &game->item.height);
}

void	xpm_walk(t_game *game)
{
	game->walk.zero = mlx_xpm_file_to_image(game->mlx,
			"./xpm/0.xpm", &game->walk.width, &game->walk.height);
	game->walk.one = mlx_xpm_file_to_image(game->mlx,
			"./xpm/1.xpm", &game->walk.width, &game->walk.height);
	game->walk.two = mlx_xpm_file_to_image(game->mlx,
			"./xpm/2.xpm", &game->walk.width, &game->walk.height);
	game->walk.three = mlx_xpm_file_to_image(game->mlx,
			"./xpm/3.xpm", &game->walk.width, &game->walk.height);
	game->walk.four = mlx_xpm_file_to_image(game->mlx,
			"./xpm/4.xpm", &game->walk.width, &game->walk.height);
	game->walk.five = mlx_xpm_file_to_image(game->mlx,
			"./xpm/5.xpm", &game->walk.width, &game->walk.height);
	game->walk.six = mlx_xpm_file_to_image(game->mlx,
			"./xpm/6.xpm", &game->walk.width, &game->walk.height);
	game->walk.seven = mlx_xpm_file_to_image(game->mlx,
			"./xpm/7.xpm", &game->walk.width, &game->walk.height);
	game->walk.eight = mlx_xpm_file_to_image(game->mlx,
			"./xpm/8.xpm", &game->walk.width, &game->walk.height);
	game->walk.nine = mlx_xpm_file_to_image(game->mlx,
			"./xpm/9.xpm", &game->walk.width, &game->walk.height);
}

void	draw_walk_xpm_sub(t_game *game, int walk, int radix)
{
	if (walk == 5)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.five, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 6)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.six, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 7)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.seven, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 8)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.eight, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 9)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.nine, 64 * (game->map_x - radix), 64 * game->map_y);
}

void	draw_walk_xpm(t_game *game, int walk, int radix)
{
	if (walk == 0)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.zero, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 1)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.one, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 2)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.two, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 3)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.three, 64 * (game->map_x - radix), 64 * game->map_y);
	else if (walk == 4)
		mlx_put_image_to_window(game->mlx, game->mlx_win,
			game->walk.four, 64 * (game->map_x - radix), 64 * game->map_y);
	else
		draw_walk_xpm_sub(game, walk, radix);
}

void	draw_walk(t_game *game, int walk, int radix)
{
	if (walk > 9)
		draw_walk(game, walk / 10, radix + 1);
	draw_walk_xpm(game, walk % 10, radix);
}
