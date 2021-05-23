GCC = clang++
NAME = pony
FLAG = -Wall -Wextra -Werror
SRC = main.cpp Pony.cpp
HEADERS = Pony.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	$(GCC) $(FLAG) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADERS)
	@$(CC) -c $(FLAG) $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re