/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:26:40 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:52 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strchr(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (0);
}

int	count_str(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int	find_xy(t_game *game, int signal)
{
	int		x;
	int		y;

	y = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (x < game->map_x)
		{
			if (game->map[y][x] == 'P')
			{
				if (signal == 0)
					return (x);
				if (signal == 1)
					return (y);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void	fill_background(t_game *game)
{
	int		i;

	i = 0;
	while (i < game->map_x)
	{
		mlx_put_image_to_window(game->mlx,
			game->mlx_win, game->back.img, 64 * i, 64 * game->map_y);
		i++;
	}
}

void	swap_img(t_game *game)
{
	void	*a;

	a = game->item.img;
	game->item.img = game->item.img1;
	game->item.img1 = a;
	game->count = 0;
}
