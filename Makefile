# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:35:51 by mialbert          #+#    #+#              #
#    Updated: 2021/12/17 12:02:58 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Werror -Wextra
SRCS = 	ft_printf.c \
		ft_hex.c \
		ft_putchar.c \
		ft_putmem.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_uphex.c \
		ft_uputnbr.c \
		ft_hex2.c

OBJS = $(SRCS:.c=.o)

#fun colours! 
CLR = \033[
NC=$(CLR)0m
BLACK = $(CLR)0;30m
RED = $(CLR)0;31m
GREEN = $(CLR)0;32m
ORANGE = $(CLR)0;33m
BLUE = $(CLR)0;34m
PURPLE = $(CLR)0;35m
CYAN = $(CLR)0;36m
YELLOW = $(CLR)1;33m
WHITE = $(CLR)1;37m

TIME = 0.07

all: $(NAME)

%.o: %.c 
	@echo "${GREEN}========== Compiling... =========="
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	@echo "${BLUE}======== Creating library ========"
	ar rcs $@ $^
	
test:
	@echo "${CYAN}========== Test output ===========${CYAN}"
	@$(CC) $(CFLAGS) $(SRCS) && ./a.out
	@echo ""

clean:
	@rm -f $(OBJS)
	@echo "${RED} Removed ${NC} $(OBJS)"

fclean: clean
	@rm -f $(NAME)
	@echo "${RED} Removed ${NC} $(NAME)"

re: fclean all

wolf:
	@clear
	@echo "${PURPLE}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${BLUE}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${CYAN}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${GREEN}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${YELLOW}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${RED}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@clear
	@echo "${WHITE}           #&                 &%"     
	@echo '           #%%               %&(%'        
	@echo '           # *%   %%/ ,%%   %% %*'       
	@echo '          ##   %&          %#  &#'       
	@echo '         #$%&.                   (%/'      
	@echo '       #/                          %'    
	@echo '      #%       %%         %%       (%'   
	@echo '      "#%%%,     ..      .      %%%#*'   
	@echo '         "%(#.                #(#%'      
	@echo '             #,              %'          
	@echo '              %.   .,,,,    %.'          
	@echo '               %    &%%    %*'           
	@echo '                %%%%,%.%%&,'
	@sleep $(TIME)
	@make wolf

.PHONY: all clean fclean re test wolf clear
