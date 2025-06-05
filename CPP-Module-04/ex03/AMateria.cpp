/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:38:49 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & newType) : _type(newType) {
}

AMateria::AMateria(const AMateria & src) : _type(src._type) {
}

const AMateria & AMateria::operator=(const AMateria & rhs) { //Can't assigne _type because of const variable
	return *this;
}

AMateria::~AMateria(void) {
	
}

/* Getter Setter */

std::string const & AMateria::getType(void) const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	/* To do */
}