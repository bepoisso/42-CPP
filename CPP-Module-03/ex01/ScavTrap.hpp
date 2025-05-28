/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:27:58 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 13:46:55 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */

public:
	/* Canonical start */
	ScavTrap(void); // Default Constructor
	ScavTrap(const ScavTrap & src);
	~ScavTrap(void);
	ScavTrap & operator=(const ScavTrap & rhs);
	/* Canonical end */

	ScavTrap(std::string newName);

	/* Functions */
	void attack(const std::string &target);
	void guardGate(void);
};

std::ostream & operator<<(std::ostream & out, ScavTrap const & value);
