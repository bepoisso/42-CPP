/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:51:02 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    
}

Ice::Ice(const Ice & src) : AMateria(src._type) {
    
}

const Ice & Ice::operator=(const Ice & rhs) {} //

Ice::~Ice() {
    
}


/* Mathods */
AMateria* Ice::clone() const {
    
}

void Ice::use(ICharacter& target) {
  
    
}