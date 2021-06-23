CC = clang++
SRC = main.cpp SeDesi_rialization.cpp
INC = SeDesi_rialization.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = serialize

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean