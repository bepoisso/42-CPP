/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:35:40 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 12:21:47 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string newName) : _name(newName) {
    for (int i = 0; i < 4; i++) {
        _index[i] = false;
    }
    
}

Character::Character(const Character & src) : _name(src._name), _index(src._index) {
    for (int i = 0; i < 4; i++) {
        // Faire la copie profonde
    }
}

const Character & Character::operator=(const Character & rhs) {} // Can't assigne const var

Character::~Character() {}


/* Getter Setter */
std::string const & Character::getName() const {
    return _name;
}


/* Methods */
void Character::equip(AMateria* m) {
    int i = -1;
    while (++i < 4)
        if (_index[i] == false)
            break ;
    if (i == 4)
        return ;
    _inventory[i] = m;
    _index[i] = true;
}

void Character::unequip(int idx) {
    if (_index[idx] == false)
        return ;
    _inventory[idx] = 0;
    _index[idx] = false;
}

void Character::use(int idx, ICharacter& target) {
    if (_index[idx] == false)
        return;
    _inventory[idx]->use(target);
}
