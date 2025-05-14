/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:59:28 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 16:00:59 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	/* data */
public:
	std::string name;
	Weapon &weapon;

	void attack(void) const;
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};
