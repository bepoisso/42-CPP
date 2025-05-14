/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:35:43 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 10:57:15 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(10, "Grrrrr");

	for (size_t i = 0; i < 10; i++)
		horde[i].annoucement();

	delete[] horde;
	return 0;
}
