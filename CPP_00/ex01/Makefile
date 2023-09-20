
NAME =		phone_book

CC =		c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \
		PhoneBook.cpp \
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
