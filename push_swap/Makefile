# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 18:32:11 by slee2             #+#    #+#              #
#    Updated: 2021/07/14 23:17:15 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NAME1 = checker
SRCS = ./mandatory/ai_sub1.c ./mandatory/arg_case_util.c ./mandatory/arg_case.c ./mandatory/ft_split.c ./mandatory/ai_sub.c ./mandatory/check_cmd.c ./mandatory/remove_cmd.c ./mandatory/display_cmd.c ./mandatory/ai.c ./mandatory/cmd_rr.c ./mandatory/cmd_r.c ./mandatory/cmd_s_p.c ./mandatory/do_cmd.c ./mandatory/util_1.c ./mandatory/util.c ./mandatory/push_swap.c
SRCS_BONUS = ./bonus/do_cmd_bonus.c ./bonus/ft_split_bonus.c ./bonus/get_next_line.c ./bonus/get_next_line_utils.c ./bonus/util_1_bonus.c ./bonus/util_bonus.c ./bonus/main.c ./bonus/cmd_r_bonus.c ./bonus/cmd_rr_bonus.c ./bonus/cmd_s_p_bonus.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME) $(NAME1)

$(NAME1): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -o $(NAME1) $(OBJS_BONUS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I./include -c $^ -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME1)

re: fclean all

.PHONY: all clean fclean re
