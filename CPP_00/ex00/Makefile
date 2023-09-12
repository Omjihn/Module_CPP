# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 17:05:50 by gbricot           #+#    #+#              #
#    Updated: 2023/09/12 17:48:41 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

CC =		c++

CFLAGS =	-Wall -Wextra -Werror

SRC =		megaphone.cpp 

$(NAME):
	c++ $(CFLAGS) $(SRC) -o $(NAME)
all: $(NAME)

clean:
	rm -f $(NAME)

re: fclean $(NAME)
