# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davda-si <davda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 11:29:30 by davda-si          #+#    #+#              #
#    Updated: 2023/07/03 16:22:04 by davda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_args.c ft_hex.c ft_point.c ft_printf.c ft_putchar.c ft_putnbr.c \
ft_putstr.c

OBJ = ${SRC:.c=.o}

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		@ar -crs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re