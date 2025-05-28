/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:16:37 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 13:37:08 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hp;	//Hit point (Health)
	int			_ep;	//Energi Point
	int			_ad;	//Atack Damage


public:
	/* Canonical start */
	ClapTrap(void); // Default Constructor
	ClapTrap(const ClapTrap & src);
	~ClapTrap(void);
	ClapTrap & operator=(const ClapTrap & rhs);
	/* Canonical end */

	ClapTrap(std::string newName);

	/* Getter & Setter */
	std::string	getName(void) const;
	int		getHitPoint(void) const;
	int		getEnergypoint(void) const;
	int		getAtackDamage(void) const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

std::ostream & operator<<(std::ostream & out, ClapTrap const & value);
