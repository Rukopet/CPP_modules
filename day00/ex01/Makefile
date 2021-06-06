CC = clang++
NAME = phonebook
FLAG = -Wall -g -Wextra -Werror -std=c++98
SRC = main.cpp User_Class.cpp Phonebook_Class.cpp
HEADERS = Phonebook_Class.hpp User_Class.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(FLAG) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re