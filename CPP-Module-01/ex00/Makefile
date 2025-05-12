# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 14:22:07 by bepoisso          #+#    #+#              #
#    Updated: 2025/05/12 14:37:12 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=BraiiiiiiinnnzzzZ
CXX=c++ -Wall -Wextra -Werror -std=c++98

SRCS=	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

OBJS= $(SRCS:.cpp=.o)

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