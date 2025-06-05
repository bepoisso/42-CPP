/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:35:43 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 14:37:37 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	/* data */
public:
	Character(/* args */);
	Character(const Character & src);
	const Character & operator=(const Character & rhs);
	~Character();

    /* Getter Setter */
	std::string const & getName() const;

	/* Methods */
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
