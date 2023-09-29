# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 15:03:31 by gbricot           #+#    #+#              #
#    Updated: 2023/09/29 17:01:01 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Harl

CC =		g++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp\
			Harl.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			@rm -f $(OBJ)

fclean:		clean
			@rm -f $(NAME)

re:			fclean $(NAME)