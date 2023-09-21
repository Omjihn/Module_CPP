# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 16:06:06 by gbricot           #+#    #+#              #
#    Updated: 2023/09/21 16:13:12 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Bank_recover

CC = 		c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		tests.cpp \
		Account.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)
