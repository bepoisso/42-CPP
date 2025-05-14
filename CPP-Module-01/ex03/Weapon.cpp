/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:59:35 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 15:54:39 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

std::string	Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}

Weapon::Weapon(std::string newType) {
	this->setType(newType);
}

Weapon::~Weapon()
{
}
