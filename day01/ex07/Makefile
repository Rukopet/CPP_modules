GCC = clang++
NAME = replace
FLAG = -Wall -Wextra -Werror
SRC = main.cpp
HEADERS =
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	$(GCC) $(FLAG) -o $(NAME) $(SRC)

%.o: %.cpp $(HEADERS)

cp:
	cp ./reserved/file_one ./reserved/file_two .

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re cp