# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:35:51 by mialbert          #+#    #+#              #
#    Updated: 2021/12/05 22:44:09 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = print.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = 	printf.c \
		ft_hex.c \
		ft_putchar.c \
		ft_putmem.c \
		ft_putnbr.c \
		ft_pustr.c \
		ft_uphex.c \
		ft_uputnbr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.c: %.o 
	$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re