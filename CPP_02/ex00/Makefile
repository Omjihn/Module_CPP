# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 15:06:52 by gbricot           #+#    #+#              #
#    Updated: 2023/10/02 13:10:12 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Fixed_value

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp\
			Fixed.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			@rm -f $(OBJ)

fclean:		clean
			@rm -f $(NAME)

re:			fclean $(NAME)