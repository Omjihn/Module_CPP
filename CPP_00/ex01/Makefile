
NAME = My Awesome PhoneBook

SRC = 

OBJ = $(SRC:.c=.o)

$(NAME):
	c++ $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
