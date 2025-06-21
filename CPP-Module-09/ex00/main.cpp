/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:15:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/21 16:59:20 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char const *av[])
{
	(void)av;
	if (ac != 2) {
		std::cerr << "error : bad arguments" << std::endl;
		return 1;
	}

	std::ifstream file(av[1]);
	
	if (!file.is_open()) {
		std::cerr << "error: could not open file" << std::endl;
		return 1;
	}

	
	
	return 0;
}
