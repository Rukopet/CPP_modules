CC = clang++
SRC = main.cpp
INC = iter.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = iter

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all