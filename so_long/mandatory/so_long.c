/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:21:53 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:41:07 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_button(t_game *game)
{
	malloc_free(game->map);
	return (0);
}

int	main(int argc, char **argv)
{
	t_game		game;

	if (argc != 2)
		error();
	game.file = argv[1];
	map_init(&game);
	minilibx_init(&game);
	xpm(&game);
	draw(&game);
	draw_walk(&game, 0);
	mlx_hook(game.mlx_win, 17, 0, exit_button, &game);
	mlx_hook(game.mlx_win, KEY_PRESS, 1L << 0, key_press, &game);
	mlx_loop_hook(game.mlx, main_move, &game);
	mlx_loop(game.mlx);
}
