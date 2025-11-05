# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 13:27:29 by JuHyeon           #+#    #+#              #
#    Updated: 2025/10/16 12:06:39 by juhyeonl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tests
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS		=	Account.cpp tests.cpp
OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re