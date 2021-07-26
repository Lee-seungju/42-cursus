/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xpm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:05:04 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:41:10 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
}

void	draw_walk(t_game *game, int walk)
{
	ft_putstr(ft_itoa(walk, game));
	ft_putchar('\n');
}
