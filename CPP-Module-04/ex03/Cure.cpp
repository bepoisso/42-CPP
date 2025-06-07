/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:20 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 11:25:20 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("Cure") {
    
}

Cure::Cure(const Cure & src) : AMateria(src._type) {
    
}

const Cure & Cure::operator=(const Cure & rhs) {} // Const var can't assigne

Cure::~Cure() {}


/* Methods */
AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
}