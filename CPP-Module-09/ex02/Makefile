# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/22 16:40:50 by bepoisso          #+#    #+#              #
#    Updated: 2025/06/22 17:00:15 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PmergeMe
CXX= c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp PmergeMe.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
