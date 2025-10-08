# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 14:43:14 by JuHyeon           #+#    #+#              #
#    Updated: 2025/10/08 14:47:24 by JuHyeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re