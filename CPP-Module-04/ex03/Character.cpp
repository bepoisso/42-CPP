/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:35:40 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 17:00:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string newName) : _name(newName), _index(0) {
}

Character::Character(const Character & src) : _name(src._name), _index(src._index) {
    for (int i = 0; i < 4; i++) {
        // Fait la copie profonde
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
    if (_index == 3)
        return ;
    _inventory[++_index] = m;
}

void Character::unequip(int idx) {
    if (!_inventory[idx])
        return ;
    _inventory[idx] = 0;
    
}

void Character::use(int idx, ICharacter& target) {
    if (!_inventory[idx])
        return;
    _inventory[idx]->use(target);
}
