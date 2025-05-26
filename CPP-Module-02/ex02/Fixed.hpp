/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:35:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/26 16:42:22 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
	int	_fixedPointValue;
	static const int _fractionalBits = 8;

public:
	/* Canonical start */
	Fixed(void); // Default Constructor
	Fixed(const Fixed & src);
	~Fixed();
	Fixed & operator=(const Fixed & rhs);
	/* Canonical end */
	Fixed(int const n);
	Fixed(float const f);

	/* GET / SET */
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	/* FUNCTION */
	float toFloat( void ) const;
	int toInt( void ) const;
	
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);

	/* OPERATOR: COMP*/
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	/* OPERATOR: ARITHMETICAL*/
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	/* OPERATOR: INCREMENT*/
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
};

std::ostream & operator<<(std::ostream & out, Fixed const & value);


