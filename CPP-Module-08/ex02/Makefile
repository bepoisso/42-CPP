# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 11:38:57 by bepoisso          #+#    #+#              #
#    Updated: 2025/06/19 12:55:05 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CXX = c++ -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re