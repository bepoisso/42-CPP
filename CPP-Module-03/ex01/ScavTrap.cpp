/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:28:01 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:11 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap("Default") {
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName) {
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_ad = rhs._ad;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & out, ScavTrap const & value) {
	out <<	"Name : " << value.getName() << "; " <<
		"Hit Point : " << value.getHitPoint() << "; " <<
		"Energy Point : " << value.getEnergypoint() << "; " <<
		"Atack Damage : " << value.getAtackDamage() << std::endl;
	return out;
}

/* Functions */

void	ScavTrap::attack(const std::string &target) {
	if (!_hp)
		std::cout << "StavTrap " << this->getName() << "try to attack but is dead" << std::endl;
	else if (!_ep)
		std::cout << "StavTrap " << this->getName() << " as not enought power to attack " << target << std::endl;
	else
	{
		_ep--;
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _ad << " points of damage" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (!_hp)
		std::cout << "ScavTrap " << _name << " try to be in Gate kepper mode but is dead" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is now in Gate kepper mode" << std::endl;
}
