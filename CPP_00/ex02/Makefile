
NAME =		Bank_recover

CC = 		c++

//CFLAGS =	-Wall -Wextra -Werror 

SRC =		tests.cpp \
			Account.cpp

OBJ =		$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)