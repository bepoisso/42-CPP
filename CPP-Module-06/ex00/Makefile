# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 13:40:24 by bepoisso          #+#    #+#              #
#    Updated: 2025/06/12 15:10:49 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert
CXX= c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp ScalarConverter.cpp

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
