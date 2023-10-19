# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:16:08 by gbricot           #+#    #+#              #
#    Updated: 2023/10/19 16:44:34 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Polymorphism

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -Wshadow

SRC =		main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp

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