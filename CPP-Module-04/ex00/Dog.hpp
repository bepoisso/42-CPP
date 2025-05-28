/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:22:02 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 15:28:02 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */

public:
	/* Canonical start */
	Dog(void); // Default Constructor
	Dog(const Dog & src);
	~Dog(void);
	Dog & operator=(const Dog & rhs);
	/* Canonical end */

};

std::ostream & operator<<(std::ostream & out, Dog const & value);
