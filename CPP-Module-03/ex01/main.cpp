/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:15:58 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 14:17:24 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap Hermine("Hermine");
	ScavTrap Henri("Henri");

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());
	Henri.beRepaired(1);

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());

	Henri.attack("Hermine");
	Hermine.takeDamage(Henri.getAtackDamage());

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Henri");
	Henri.takeDamage(Hermine.getAtackDamage());

	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);
	Hermine.beRepaired(1);
	Henri.beRepaired(1);

	Hermine.guardGate();
	Henri.guardGate();

	return 0;
}
