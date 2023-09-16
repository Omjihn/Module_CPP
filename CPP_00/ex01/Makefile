
NAME =		phone_book

CC =		c++

CFLAGS =	-Wall -Wextra -Werror

SRC =		main.cpp \
		PhoneBook.cpp

OBJ =		$(SRC:.c=.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean $(NAME)
