# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:16:08 by gbricot           #+#    #+#              #
#    Updated: 2023/10/27 13:48:22 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

SRC = 		main.cpp \
			Cat.cpp \
			Dog.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

BLUE = "\033[0;36m"
WHITE = "\033[0;37m"
RED = "\033[0;31m"
GREEN = "\033[0;32m"

TOTAL = $(words $(SRC))
COUNT = 0

define colorecho
	@tput civis
	@echo -n $(1) "     ["
	@for i in `seq 1 $(TOTAL)`; do \
		echo -n "▓"; \
		sleep 0.05; \
	done
	echo -n "]"; echo;
	@tput cnorm
endef


all: $(NAME)

$(NAME): $(OBJ)
	@$(call colorecho, $(GREEN)Compiling program :  )
	@$(CC) $(CPPFLAGS) $^ -o $@ 2>/dev/null
	@echo $(GREEN)[$(NAME)] Successfully compilated !$(WHITE)

%.o: %.cpp
	$(eval COUNT=$(shell echo $$(($(COUNT)+1))))
	@echo -n "Compiling objects files: "
	@echo -n "["
	@for i in `seq 1 $(shell echo $$(($(COUNT) * $(TOTAL) / $(TOTAL))))`; do \
		echo -n "▓"; \
	done
	@for i in `seq 1 $$(($(TOTAL) - $(COUNT) * $(TOTAL) / $(TOTAL)))`; do \
		echo -n "-"; \
	done
	@echo -n "] $(shell echo $$(($(COUNT) * 100 / $(TOTAL))))%    "
	@$(CC) $(CPPFLAGS) -c $< -o $@ 2>/dev/null && echo -n "\r"

regular:
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@echo $(RED)Objects files deleted$(WHITE)
	@rm -f $(OBJ)

fclean: clean
	@echo $(RED)Program deleted$(WHITE)
	@rm -f $(NAME)

re: fclean all