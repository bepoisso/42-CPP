/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:41:25 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice();
	Ice(const Ice & src);
	const Ice & operator=(const Ice & rhs);
	~Ice();

	/* Mathods */
	AMateria* clone() const;
	void use(ICharacter& target);
};
