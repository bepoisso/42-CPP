/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:22:05 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/12 15:26:33 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


int main(void)
{
	Zombie *zom = newZombie("Philippe");
	zom->annoucement();
	randomChump("Antoine");
	
	delete zom;
	return 0;
}
