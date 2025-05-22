/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:35:58 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/22 19:21:47 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) :  _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->_fractionalBits);
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(f * (1 << this->_fractionalBits)));
}

Fixed::Fixed(const Fixed & src) {
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(src.getRawBits());
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	this->setRawBits(rhs.getRawBits());

	return *this;
}

int Fixed::getRawBits( void ) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
}

int Fixed::toInt( void ) const {
	return (this->getRawBits() >> this->_fractionalBits);
}

float Fixed::toFloat( void ) const {
	return ((float)this->getRawBits() / (1 << this->_fractionalBits));
}

std::ostream & operator<<(std::ostream & out, Fixed const & value) {
	out << value.toFloat();
	return out;
}
