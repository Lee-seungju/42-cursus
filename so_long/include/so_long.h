/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:22:09 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:40:57 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>

# define KEY_PRESS		2
# define UP				13
# define DOWN			1
# define LEFT			0
# define RIGHT			2
# define ESC			53

typedef struct s_start{
	void		*img;
	int			width;
	int			height;
	int			x;
	int			y;
}				t_start;

typedef struct s_item{
	void		*img;
	int			width;
	int			height;
	int			item;
	int			max;
}				t_item;

typedef struct s_exit{
	void		*img;
	int			width;
	int			height;
}				t_exit;

typedef struct s_wall{
	void		*img;
	int			width;
	int			height;
}				t_wall;

typedef struct s_walk{
	int			walk;
}				t_walk;

typedef struct s_game{
	char		*file;
	void		*mlx;
	void		*mlx_win;
	t_wall		wall;
	t_exit		exit;
	t_start		start;
	t_item		item;
	char		**map;
	int			map_x;
	int			map_y;
	t_walk		walk;
}				t_game;

int				ft_strlen(char *s);
void			ft_putchar(char c);
void			ft_putstr(char *s);
char			*ft_strdup(char *s);
int				count_y(char **map);
char			**make_map(char *buff);
void			check_map(char **map);
void			error(void);
void			malloc_error(int i, char **map);
char			*ft_strchr(char *s, char c);
void			minilibx_init(t_game *game);
void			map_init(t_game *game);
void			img_init(t_game *game);
int				count_str(char *s, char c);
int				key_press(int keycode, t_game *game);
int				key_release(int keycode, t_game *game);
int				find_xy(t_game *game, int signal);
void			move(t_game *game, int x, int y);
int				main_move(t_game *game);
void			xpm(t_game *game);
char			*ft_itoa(int n, t_game *game);
void			draw_walk(t_game *game, int walk);
void			draw(t_game *game);
void			malloc_free(char **map);

#endif
