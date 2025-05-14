/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:59:31 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 15:59:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	/* data */
public:
	std::string name;
	Weapon *weapon;

	void attack(void) const;
	void setWeapon(Weapon &newWeapon);
	HumanB(std::string name);
	~HumanB();
};
