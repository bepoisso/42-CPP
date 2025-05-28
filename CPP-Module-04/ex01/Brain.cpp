/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:09:23 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 17:47:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	for (int i = 0; i < 100; i++) {
		_ideas[i] = "";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = src._ideas[i];
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain & rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

std::string	Brain::getIdeas(int index) const {
	return _ideas[index];
}

void		Brain::setIdeas(std::string newIdea, int index) {
	_ideas[index] = newIdea;
}
