/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:35:48 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 10:48:37 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " destroy" << std::endl;
	return;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return;
}

void	Zombie::annoucement(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}