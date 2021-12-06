# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:35:51 by mialbert          #+#    #+#              #
#    Updated: 2021/12/06 16:15:24 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = 	ft_printf.c \
		ft_hex.c \
		ft_putchar.c \
		ft_putmem.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_uphex.c \
		ft_uputnbr.c

OBJS = $(SRCS:.c=.o)

CLR = \033[
NC=$(CLR)0m
BLACK = $(CLR)0;30m
RED = $(CLR)0;31m
GREEN = $(CLR)0;32m
ORANGE = $(CLR)0;33m
BLUE = $(CLR)0;34m
PURPLE = $(CLR)0;35m
CYAN = $(CLR)0;36m
LGRAY = $(CLR)0;37m
DGRAY = $(CLR)1;30m
LRED = $(CLR)1;31m
LGREEN = $(CLR)1;32m
YELLOW = $(CLR)1;33m
LBLUE = $(CLR)1;34m
LPURPLE = $(CLR)1;35m
LCYAN = $(CLR)1;36m
WHITE = $(CLR)1;37m

FCLEAN = $(shell rm -f $(NAME))

all: $(NAME)

%.o: %.c 
	@echo "${GREEN}========== compiling... =========="
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	@echo "${BLUE}======== creating library ========"
	ar rcs $@ $^

test:
	@echo "${CYAN}========== test output ==========${CYAN}"
	@$(CC) $(CFLAGS) $(SRCS) && ./a.out
	@echo ""

clean:
	@rm -f $(OBJS)
	@echo "${RED} removed ${NC} $(OBJS)"

fclean: clean
	@rm -f $(NAME)
	@echo "${RED} removed ${NC} $(NAME)"

re: fclean all

.PHONY: all clean fclean re test