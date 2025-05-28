/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:15:58 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 14:42:55 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ScavTrap Hermine("Hermine");
	ScavTrap Henri("Henri");
	FragTrap Olivier("Olivier");

	Olivier.highFivesGuys();

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());
	Henri.beRepaired(1);

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Henri.attack("Olivier");
	Olivier.takeDamage(Henri.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Henri.attack("Olivier");
	Olivier.takeDamage(Henri.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Hermine.attack("Olivier");
	Olivier.takeDamage(Hermine.getAtackDamage());

	Henri.attack("Olivier");
	Olivier.takeDamage(Henri.getAtackDamage());

	Henri.attack("Olivier");
	Olivier.takeDamage(Henri.getAtackDamage());

	Olivier.highFivesGuys();

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

	Olivier.highFivesGuys();

	return 0;
}
