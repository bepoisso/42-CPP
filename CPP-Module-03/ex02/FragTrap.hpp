/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:26:50 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 14:51:19 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */

public:
	/* Canonical start */
	FragTrap(void); // Default Constructor
	FragTrap(const FragTrap & src);
	~FragTrap(void);
	FragTrap & operator=(const FragTrap & rhs);
	/* Canonical end */

	FragTrap(std::string newName);

	/* Functions */
	void highFivesGuys(void);
	void attack(const std::string &target);
};

std::ostream & operator<<(std::ostream & out, FragTrap const & value);
