/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:09:23 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 16:22:03 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & src) {
	std::cout << "Brain copy constructor called" << std::endl;
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
