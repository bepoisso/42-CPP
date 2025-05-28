/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:11:16 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 15:47:20 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	/* Canonical start */
	WrongAnimal(void); // Default Constructor
	WrongAnimal(const WrongAnimal & src);
	virtual ~WrongAnimal(void);
	WrongAnimal & operator=(const WrongAnimal & rhs);
	/* Canonical end */

	WrongAnimal(std::string type);

	/* Getter / Setter */
	std::string	getType(void) const;
	
	/* Functions */

	void	makeSound(void) const;

};
