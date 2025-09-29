NAME = phonebook

C++         = c++
C++_FLAGS   = -Wall -Wextra -Werror -std=c++98 -pedantic -Iincludes

SRC_DIR     = ./srcs
OBJ_DIR     = ./objs

SRC = \
	$(SRC_DIR)/PhoneBook.cpp \
	$(SRC_DIR)/main.cpp \
	$(SRC_DIR)/Contact.cpp

OBJ = $(SRC:$(SRC_DIR)%=$(OBJ_DIR)/%)
OBJ := $(OBJ:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $(NAME)..."
	@$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)
	@echo "Done"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@echo "Compiling $<..."
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned up all object files"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned up $(NAME)"

re: fclean all
	@echo "Remade everything"

.PHONY: all clean fclean re
