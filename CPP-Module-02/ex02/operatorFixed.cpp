/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorFixed.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 19:33:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/26 16:08:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Fixed.hpp"

/* OPERATOR: COMP*/
	bool Fixed::operator>(Fixed const &rhs) const {
		return this->getRawBits() > rhs.getRawBits();
	}

	bool Fixed::operator<(Fixed const &rhs) const {
		return this->getRawBits() < rhs.getRawBits();
	}

	bool Fixed::operator>=(Fixed const &rhs) const {
		return this->getRawBits() >= rhs.getRawBits();
	}

	bool Fixed::operator<=(Fixed const &rhs) const {
		return this->getRawBits() <= rhs.getRawBits();
	}

	bool Fixed::operator==(Fixed const &rhs) const {
		return this->getRawBits() == rhs.getRawBits();
	}

	bool Fixed::operator!=(Fixed const &rhs) const {
		return this->getRawBits() != rhs.getRawBits();
	}


	/* OPERATOR: ARITHMETICAL*/
	Fixed Fixed::operator+(Fixed const &rhs) const {
		return Fixed(this->toFloat() + rhs.toFloat());
	}
	
	Fixed Fixed::operator-(Fixed const &rhs) const {
		return Fixed(this->toFloat() - rhs.toFloat());
	}
	
	Fixed Fixed::operator*(Fixed const &rhs) const {
		return Fixed(this->toFloat() * rhs.toFloat());
	}
	
	Fixed Fixed::operator/(Fixed const &rhs) const {
		if (!rhs.toFloat())
			std::cout << "error: division by zero" << std::endl, exit(1);
		return Fixed(this->toFloat() / rhs.toFloat());
	}

	/* OPERATOR: INCREMENT*/
	Fixed& Fixed::operator++() {
		this->setRawBits(this->getRawBits() + 1);
		return *this;
	}

	Fixed Fixed::operator++(int) {
		Fixed temp = *this;
		this->setRawBits(this->getRawBits() + 1);
		return temp;
	}

	Fixed& Fixed::operator--() {
		this->setRawBits(this->getRawBits() - 1);
		return *this;
	}

	Fixed Fixed::operator--(int) {
		Fixed temp = *this;
		this->setRawBits(this->getRawBits() - 1);
		return temp;
	}

