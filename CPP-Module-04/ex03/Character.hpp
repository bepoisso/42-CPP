/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:35:43 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 17:01:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "iostream"

class Character : public ICharacter
{
private:
	const std::string   _name;
    AMateria*           _inventory[4];
    int                 _index; // a voir le systeme d'index pas sur 

public:
	Character(const std::string newName);
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
