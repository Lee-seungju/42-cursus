# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 13:43:47 by slee2             #+#    #+#              #
#    Updated: 2021/07/09 02:36:07 by slee2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRCS = get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
