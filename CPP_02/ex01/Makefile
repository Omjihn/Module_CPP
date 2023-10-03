# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 15:05:45 by gbricot           #+#    #+#              #
#    Updated: 2023/10/03 14:53:44 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Fixed_float_value

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp\
			Fixed.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@echo "[$(NAME)] successfully compilated"

all:		$(NAME)

clean:
			@echo "Objects files deleted"
			@rm -f $(OBJ)

fclean:		clean
			@echo "Program deleted"
			@rm -f $(NAME)

re:			fclean $(NAME)