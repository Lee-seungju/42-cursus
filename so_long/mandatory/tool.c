/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:43:17 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:41:08 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	minilibx_init(t_game *game)
{
	game->mlx = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx,
			game->map_x * 64, game->map_y * 64, "so_long");
	game->item.item = 0;
	game->walk.walk = 0;
	xpm(game);
}

int	main_move(t_game *game)
{
	mlx_clear_window(game->mlx, game->mlx_win);
	draw(game);
	return (0);
}

void	map_init(t_game *game)
{
	int		fd;
	char	buff[400000];
	char	error_buff[400000];

	fd = open(game->file, O_RDONLY);
	if (0 > fd)
		error();
	if (0 > read(fd, buff, 400000))
		error();
	if (0 < read(fd, error_buff, 400000))
		error();
	close(fd);
	game->map = make_map(buff);
	check_map(game->map);
	game->map_x = ft_strlen(game->map[0]);
	game->map_y = count_y(game->map);
	game->start.x = find_xy(game, 0);
	game->start.y = find_xy(game, 1);
	game->item.max = count_str(buff, 'C');
}
