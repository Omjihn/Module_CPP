# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 09:31:49 by gbricot           #+#    #+#              #
#    Updated: 2024/03/18 10:18:43 by gbricot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98 -Wshadow -Wno-unused

SRC_DIR = ./
SRC =	main.cpp

OBJ_DIR = ./obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))


###
###			Just for visuals effects

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
	echo -n "]"; echo " 100%";
	@tput cnorm
endef

###
###


all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(call colorecho, $(GREEN)Compiling program :  )
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)[$(NAME)] Successfully compilated !$(WHITE)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
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
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@echo -n "\r"

regular:
	@$(CC) $(CPPFLAGS) $(SRC_DIR)/$(SRC) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo $(RED)Objects files deleted$(WHITE)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)Program deleted$(WHITE)

re: fclean all