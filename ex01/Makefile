GCC = clang++
NAME = phonebook
FLAG = -Wall -g -Wextra -Werror
SRC = main.cpp User_Class.cpp Phonebook_class.cpp
HEADERS = Phonebook.hpp User_Class.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	$(GCC) $(FLAG) -o $(NAME) $(SRC)

%.o: %.cpp $(HEADERS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re