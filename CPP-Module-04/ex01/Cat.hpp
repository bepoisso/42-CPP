/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:21:50 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 17:41:06 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;

public:
	/* Canonical start */
	Cat(void); // Default Constructor
	Cat(const Cat & src);
	virtual ~Cat(void);
	Cat & operator=(const Cat & rhs);
	/* Canonical end */

	/* Getter / Setter */
	std::string	getIdeas(int index);
	void		setIdeas(std::string newIdea, int index);

};

std::ostream & operator<<(std::ostream & out, Cat const & value);
