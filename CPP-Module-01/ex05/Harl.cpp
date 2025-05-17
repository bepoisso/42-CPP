/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:07:59 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/17 17:59:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void ) {
	std::cout << "Debug ..." << std::endl;
}
void Harl::info( void ) {
	std::cout << "Infos ..." << std::endl;
}
void Harl::warning( void ) {
	std::cout << "Warning ..." << std::endl;
}
void Harl::error( void ) {
	std::cout << "Error ..." << std::endl;
}

void Harl::complain( std::string level ) {
	void (Harl::*complaints[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string lvl[4] = {"debug", "info", "warning", "error"};

	for (size_t i = 0; i < 4; i++) {
		if (lvl[i] == level) {
			(this->*complaints[i])();
			return ;
		}
	}
	std::cout << "error: unknow command" << std::endl;
}
