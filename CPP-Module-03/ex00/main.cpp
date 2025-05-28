/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:15:58 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/26 18:26:57 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap Hermine("Hermine");
	ClapTrap Henri("Henri");

	Hermine.attack("Henri");
	Henri.takeDamage(0);
	Henri.beRepaired(1);
	Hermine.attack("Henri");
	Henri.takeDamage(0);
	Henri.attack("Hermine");
	Hermine.takeDamage(0);
	Hermine.attack("Henri");
	Henri.takeDamage(0);
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
	return 0;
}
