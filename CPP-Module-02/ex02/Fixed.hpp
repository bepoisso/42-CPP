/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:35:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/22 20:04:51 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

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


