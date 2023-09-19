
NAME =		phone_book

CC =		c++

CPPFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \
		PhoneBook.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean $(NAME)
