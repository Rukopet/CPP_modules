CC = clang++
SRC = main.cpp
INC = C.hpp A.hpp B.hpp Base.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Base

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean