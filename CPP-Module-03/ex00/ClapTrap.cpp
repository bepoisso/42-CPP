/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:16:40 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/26 18:26:48 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _ad(0) {
	std::cout << "Default constructor call" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : _name(newName), _hp(10), _ep(10), _ad(0) {
	std::cout << "Constructor call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : _name(src._name), _hp(src._hp), _ep(src._ep), _ad(src._ad) {
	std::cout << "Copy constructor call" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor call" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hp = rhs.getHitPoint();
		this->_ep = rhs.getEnergypoint();
		this->_ad = rhs.getAtackDamage();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & out, ClapTrap const & value) {
	out <<	"Name : " << value.getName() << "; " <<
			"Hit Point : " << value.getHitPoint() << "; " <<
			"Energy Point : " << value.getEnergypoint() << "; " <<
			"Atack Damage : " << value.getAtackDamage() << std::endl;
	return out;
}

std::string	ClapTrap::getName(void) const{
	return this->_name;
}

int			ClapTrap::getHitPoint(void) const{
	return this->_hp;
}

int			ClapTrap::getEnergypoint(void) const{
	return this->_ep;
}

int			ClapTrap::getAtackDamage(void) const{
	return this->_ad;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->getName() << " as not enought power to attack " << target << std::endl;
	else {
		this->_ep--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " <<
		this->getAtackDamage() << " ponts of damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp == 0)
		std::cout << "ClapTrap" << this->getName() << "is already dead, at this point it's just an obsession" << std::endl;
	else {
		
		this->_hp -= amount;
		if (this->_hp <= 0)	
			this->_hp = 0;
		std::cout << "ClapTrap " << this->getName() << " taking " <<
		amount << " ponts of damage is now at " << this->getHitPoint() << " HP";
		if (this->_hp == 0)
			std::cout << " so is dead" << std::endl;
		else
			std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep <= 0)
		std::cout << "ClapTrap " << this->getName() << " try to repaired himself but has not enought power" << std::endl;
	else if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->getName() << " try to repaired himself but is dead" << std::endl;
	else {
		this->_ep--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->getName() << " repaired himself by " << amount << " HP" << "is now at " << this->getHitPoint() <<std::endl;
	}
}

