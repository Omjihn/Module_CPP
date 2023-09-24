# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 16:05:01 by gbricot           #+#    #+#              #
#    Updated: 2023/09/24 18:21:25 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		phone_book

CC =		c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \
		PhoneBook.cpp \
		Contact.cpp \
		ft_print.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
		@echo "Installing PhOnE_bOok..."
		@sleep 2
		@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
		@echo "Installation done ! You can remove the floppy disk."

all:		$(NAME)

clean:
		@rm -f $(OBJ)

fclean:		clean
		@rm -f $(NAME)

re:		fclean $(NAME)
