# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 15:22:31 by gbricot           #+#    #+#              #
#    Updated: 2023/09/23 15:22:33 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		BraiiiiiiinnnzzzZ

CC =		c++

CPPFLAGS =	-Wall -Wextra -Werror -g

SRC =		main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

OBJ	=		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)
