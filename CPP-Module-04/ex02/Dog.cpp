/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:21:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 18:02:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog & src)  : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*src._brain);
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs) {
	if (this != &rhs) {
		_type = rhs._type;
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::string	Dog::getIdeas(int index) {
	return this->_brain->getIdeas(index);
}

void		Dog::setIdeas(std::string newIdea, int index) {
	this->_brain->setIdeas(newIdea, index);
}

	/* Function */
void	Dog::makeSound(void) const {
	std::cout << "Dog : woof" << std::endl;
}
