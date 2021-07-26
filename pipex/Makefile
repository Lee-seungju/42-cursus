# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/23 14:12:13 by slee2             #+#    #+#              #
#    Updated: 2021/07/09 02:39:53 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = pipex
SRCS = ./mand/pipex.c ./mand/pipex_util.c ./mand/ft_split.c ./mand/pipex_error.c ./mand/pipex_util_1.c
SRCS_BONUS = ./bonus/pipex_bonus.c ./bonus/pipex_util_bonus.c ./bonus/ft_split_bonus.c ./bonus/pipex_error_bonus.c ./bonus/get_next_line.c ./bonus/get_next_line_utils.c ./bonus/heredoc_bonus.c
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
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

%.o : %.c
	$(CC) $(CFLAGS) -I./include -c $^ -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
