/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:32:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 14:40:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap("Default"){
	std::cout << "FragTrap default constructor called" << std::endl;
	_hp = 100;
	_ep = 100;
	_ad = 30;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName) {
	std::cout << "FragTrap constructor called" << std::endl;
	_hp = 100;
	_ep = 100;
	_ad = 30;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_ad = rhs._ad;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & out, FragTrap const & value) {
	out <<	"Name : " << value.getName() << "; " <<
		"Hit Point : " << value.getHitPoint() << "; " <<
		"Energy Point : " << value.getEnergypoint() << "; " <<
		"Atack Damage : " << value.getAtackDamage() << std::endl;
	return out;
}

/* Functions */

void	FragTrap::highFivesGuys(void) {
	if (!_hp)
		std::cout << "FragTrap " << _name << " try to high fives but his dead" << std::endl;
	else if (!_ep)
		std::cout << "FragTrap " << _name << " try to high fives but as no enought power" << std::endl;
	else
		std::cout << "FragTrap " << _name << " high fives the other guys" << std::endl;
}
