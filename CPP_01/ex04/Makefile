# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 12:56:22 by gbricot           #+#    #+#              #
#    Updated: 2023/09/28 13:01:53 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Sed_is_for_losers

CC = g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \

OBJ =		$(SRC:.cpp=.o)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean	clean
		rm -f $(NAME)

re: fclean $(NAME)