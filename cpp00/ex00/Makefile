# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/26 21:21:09 by JuHyeon           #+#    #+#              #
#    Updated: 2025/09/26 21:23:37 by JuHyeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C++         = c++
C++_FLAGS   = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC_DIR     = ./src
OBJ_DIR     = ./obj

SRC = \
	$(SRC_DIR)/megaphone.cpp

OBJ = $(SRC:$(SRC_DIR)%=$(OBJ_DIR)/%)
OBJ := $(OBJ:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling $(NAME)..."
	@$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)
	@echo "Done"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
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