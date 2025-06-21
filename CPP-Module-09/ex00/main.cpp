/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:15:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/21 21:27:33 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "BitcoinExchange.hpp"

int main(int ac, char const *av[])
{
	
	(void)av;
	if (ac != 2) {
		std::cerr << RED << "error : bad arguments" << RESET << std::endl;
		return 1;
	}

	BitcoinExchange data;
	std::ifstream file(av[1]);
	
	if (!file.is_open()) {
		std::cerr << RED << "error: could not open file" << RESET << std::endl;
		return 1;
	}

	std::string line;
	std::getline(file, line);
    while (std::getline(file, line)) {
        data.addLine(line);
	}
	
	std::cout << data;
	
	return 0;
}
