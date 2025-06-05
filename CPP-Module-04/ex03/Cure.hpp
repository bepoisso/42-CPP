/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:19 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:41:30 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(const Cure & src);
	const Cure & operator=(const Cure & rhs);
	~Cure();

	/* Mathods */
	AMateria* clone() const;
	void use(ICharacter& target);
};