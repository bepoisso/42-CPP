/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:11:23 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 17:55:42 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("???") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

std::string Animal::getType(void) const {
	return _type;
}
