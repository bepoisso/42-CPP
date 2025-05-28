/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:22:02 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 17:41:01 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;

public:
	/* Canonical start */
	Dog(void); // Default Constructor
	Dog(const Dog & src);
	virtual ~Dog(void);
	Dog & operator=(const Dog & rhs);
	/* Canonical end */

	/* Getter / Setter */
	std::string	getIdeas(int index);
	void		setIdeas(std::string newIdea, int index);

};

std::ostream & operator<<(std::ostream & out, Dog const & value);
