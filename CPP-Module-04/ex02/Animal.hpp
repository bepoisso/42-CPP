/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:11:16 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 17:55:18 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	/* Canonical start */
	Animal(void); // Default Constructor
	Animal(const Animal & src);
	virtual ~Animal(void);
	Animal & operator=(const Animal & rhs);
	/* Canonical end */

	Animal(std::string type);

	/* Getter / Setter */
	std::string	getType(void) const;
	
	/* Functions */

	virtual void	makeSound(void) const = 0;

};
