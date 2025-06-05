/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:59 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:38:21 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string const _type;

public:
	AMateria(std::string const & newType);
	AMateria(const AMateria & src);
	const AMateria & operator=(const AMateria & rhs);
	virtual ~AMateria(void);

	/* Getter setter */
	std::string const & getType(void) const;

	/* Functions */
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};
