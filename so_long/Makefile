# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 12:39:46 by slee2             #+#    #+#              #
#    Updated: 2021/06/30 11:07:42 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = so_long
SRCS = ./mandatory/draw_map.c ./mandatory/ft_itoa.c ./mandatory/xpm.c ./mandatory/event.c ./mandatory/tool.c ./mandatory/util_1.c ./mandatory/so_long.c ./mandatory/util.c ./mandatory/check_map.c ./mandatory/error.c ./mandatory/make_map.c
SRCS_BONUS = ./bonus/draw_map_bonus.c ./bonus/check_map_bonus.c ./bonus/error_bonus.c ./bonus/make_map_bonus.c ./bonus/tool_bonus.c ./bonus/util_1_bonus.c ./bonus/enemy_bonus.c ./bonus/event_bonus.c ./bonus/so_long_bonus.c ./bonus/util_bonus.c ./bonus/xpm_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

ifdef WITH_BONUS
OBJ_FILES = $(OBJS_BONUS)
else
OBJ_FILES = $(OBJS)
endif

bonus:
	make WITH_BONUS=1 all

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -L ./minilibx_opengl_20191021 -lmlx -framework OpenGL -framework AppKit -o $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -I./include -c $^ -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
