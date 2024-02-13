# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 17:17:29 by gbricot           #+#    #+#              #
#    Updated: 2023/11/02 11:32:12 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface_recap

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -Wshadow

SRC = 		main.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			AMateria.cpp \
			MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

BLUE = "\033[0;36m"
WHITE = "\033[0;37m"
RED = "\033[0;31m"
GREEN = "\033[0;32m"

TOTAL = $(words $(SRC))
COUNT = 0

ERROR_LOG = /tmp/error_log.txt

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
	@$(CC) $(CPPFLAGS) $^ -o $@ 2>$(ERROR_LOG) || (cat $(ERROR_LOG) && rm -f $(ERROR_LOG) && exit 1)
	@echo $(GREEN)[$(NAME)] Successfully compiled !$(WHITE)

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
	@$(CC) $(CPPFLAGS) -c $< -o $@ 2>$(ERROR_LOG) || (cat $(ERROR_LOG) && rm -f $(ERROR_LOG) && exit 1)
	@echo -n "\r"

regular:
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@echo $(RED)Objects files deleted$(WHITE)
	@rm -f $(OBJ)

fclean: clean
	@echo $(RED)Program deleted$(WHITE)
	@rm -f $(NAME)

re: fclean all
