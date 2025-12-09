# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JuHyeon <juhyeonl@student.hive.fi>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 20:09:43 by JuHyeon           #+#    #+#              #
#    Updated: 2025/12/09 20:09:44 by JuHyeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = program
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRCS        = main.cpp Zombie.cpp
OBJS        = $(SRCS:.cpp=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:     clean
			$(RM) $(NAME)

re:         fclean all

.PHONY:     all clean fclean re
