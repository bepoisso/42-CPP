/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:59:30 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 15:41:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

void HumanB::attack(void) const {
	if (this->weapon != NULL)
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon to attack with!" << std::endl;

}

void HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &newWeapon;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{}

HumanB::~HumanB() {
	
}
