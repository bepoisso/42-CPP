# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 09:35:46 by bepoisso          #+#    #+#              #
#    Updated: 2025/05/14 10:49:23 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =Horde
CXX = c++ -Wall -Werror -Wextra -std=c++98 -g

SRCS =	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp

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