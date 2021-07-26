/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:39:29 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:45 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	draw_map(t_game *game, int x, int y)
{
	if (game->map[y][x] == '1')
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->wall.img, 64 * x, 64 * y);
	else if (game->map[y][x] == 'P')
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->start.img, 64 * x, 64 * y);
	else if (game->map[y][x] == 'E')
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->exit.img, 64 * x, 64 * y);
	else if (game->map[y][x] == 'C')
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->item.img, 64 * x, 64 * y);
	else if (game->map[y][x] == 'A')
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->enemy.img, 64 * x, 64 * y);
}

void	draw(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (x < game->map_x)
		{
			if (ft_strchr("1ECPA", game->map[y][x]) != 0)
				draw_map(game, x, y);
			x++;
		}
		y++;
	}
}
