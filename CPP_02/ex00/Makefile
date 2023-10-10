# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 15:06:52 by gbricot           #+#    #+#              #
#    Updated: 2023/10/10 17:52:23 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Fixed_value

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp\
			Fixed.cpp

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