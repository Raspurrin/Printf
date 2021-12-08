# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:35:51 by mialbert          #+#    #+#              #
#    Updated: 2021/12/08 17:10:32 by mialbert         ###   ########.fr        #
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
LGRAY = $(CLR)0;37m
DGRAY = $(CLR)1;30m
LRED = $(CLR)1;31m
LGREEN = $(CLR)1;32m
YELLOW = $(CLR)1;33m
LBLUE = $(CLR)1;34m
LPURPLE = $(CLR)1;35m
LCYAN = $(CLR)1;36m
WHITE = $(CLR)1;37m

TIME = 0.07

#default target
all: $(NAME)

#replacing .c with .o and compiling all object files without linking them
%.o: %.c 
	@echo "${GREEN}========== compiling... =========="
	$(CC) $(CFLAGS) -c $(SRCS)

#creating the library
$(NAME): $(OBJS)
	@echo "${BLUE}======== creating library ========"
	ar rcs $@ $^

#for private testing purposes
test:
	@echo "${CYAN}========== test output ===========${CYAN}"
	@$(CC) $(CFLAGS) $(SRCS) && ./a.out
	@echo ""

#for extra motivation
parrot:
	@curl parrot.live

#removes all object files if created
clean:
	@rm -f $(OBJS)
	@echo "${RED} removed ${NC} $(OBJS)"

#removes all object files and the archive file if created
fclean: clean
	@rm -f $(NAME)
	@echo "${RED} removed ${NC} $(NAME)"

#removes all object files and the archive file if created and remakes everything
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

#to signify that these are not files to be made

.PHONY: all clean fclean re test parrot wolf clear
