CC = clang++
NAME = phonebook
FLAG = #-Wall -g #-Wextra -Werror
SRC = main.cpp User_Class.cpp Phonebook_class.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAG) -o $(NAME) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re