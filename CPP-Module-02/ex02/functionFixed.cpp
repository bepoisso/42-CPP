/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionFixed.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:14:35 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/22 20:28:52 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed& Fixed::min(Fixed& a, Fixed& b) {
		return (a < b) ? a : b;
	}

	Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
		return (a < b) ? a : b;
	}

	Fixed& Fixed::max(Fixed& a, Fixed& b) {
		return (a > b) ? a : b;
	}

	Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
		return (a > b) ? a : b;
	}

