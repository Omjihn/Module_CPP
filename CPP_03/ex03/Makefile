# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 11:22:08 by gbricot           #+#    #+#              #
#    Updated: 2023/10/16 18:51:23 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Diamond_Trap

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC =		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

OBJ =		$(SRC:.cpp=.o)

BLUE = "\033[0;36m"
WHITE = "\033[0;37m"
RED = "\033[0;31m"
GREEN = "\033[0;32m"

$(NAME):	$(OBJ)
			$(CC)  $(CPPFLAGS) $(OBJ) -o $(NAME)
			@echo $(GREEN)[$(NAME)] successfully compilated$(WHITE)

all:		$(NAME)

clean:
			@echo $(RED)Objects files deleted$(WHITE)
			@rm -f $(OBJ)

fclean:		clean
			@echo $(RED)Program deleted$(WHITE)
			@rm -f $(NAME)

re:			fclean $(NAME)