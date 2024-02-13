# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 10:44:02 by gbricot           #+#    #+#              #
#    Updated: 2023/09/28 12:58:42 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Unnecessary_violence

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

CC =		c++

SRC =		main.cpp\
			Weapon.cpp\
			HumanB.cpp\
			HumanA.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			@rm -f $(OBJ)

fclean:		clean
			@rm -f $(NAME)

re:			fclean $(NAME)
