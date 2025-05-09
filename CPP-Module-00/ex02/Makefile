# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 17:19:02 by bepoisso          #+#    #+#              #
#    Updated: 2025/05/09 18:12:19 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Account
CXX= c++ -Wall -Werror -Wextra -std=c++98 -g

SRCS=	tests.cpp\
		Account.cpp

OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) -c $< -o $@
	
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
