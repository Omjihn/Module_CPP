# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 03:14:28 by gbricot           #+#    #+#              #
#    Updated: 2024/02/20 10:41:47 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ez_find

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -Wshadow -Wno-unused

SRC =		main.cpp

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
	echo -n "]"; echo " 100%";
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