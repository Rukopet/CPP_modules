CC = clang++
NAME = megaphone
FLAG = -Wall -g #-Wextra -Werror
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAG) -o $(NAME) $(SRC)

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

check: $(NAME)
	@echo ---------------------------------------------------------------------
	@echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@echo ---------------------------------------------------------------------
	@echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo ---------------------------------------------------------------------
	@echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
	@./$(NAME)
	@echo ---------------------------------------------------------------------
