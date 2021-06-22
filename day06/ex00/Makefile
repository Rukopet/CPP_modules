CC = clang++
SRC = main.cpp Convert.cpp
INC = Convert.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = convert

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean