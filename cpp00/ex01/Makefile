# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 16:02:43 by bepoisso          #+#    #+#              #
#    Updated: 2025/05/08 16:04:24 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CXX = c++ -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		PhoneBook.cpp\
		Contact.hpp

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

re : fclean all

.PHONY: all clean fclean re
