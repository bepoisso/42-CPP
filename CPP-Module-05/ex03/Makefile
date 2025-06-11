# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 13:40:24 by bepoisso          #+#    #+#              #
#    Updated: 2025/06/11 10:52:12 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= exec
CXX= c++ -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

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
	rm -rf *_shrubbery

re : fclean all

.PHONY : all clean fclean re