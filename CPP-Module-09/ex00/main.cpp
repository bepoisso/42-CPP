/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:15:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 11:59:06 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include "BitcoinExchange.hpp"

bool isValidLine(std::string & str) {
    BitcoinExchange bit;

    try {
        std::string date = str.substr(0, 10);
        bit.isDate(date);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return false;
    }

    std::string value = str.substr(13, str.length() - 13);
    
    if (value[0] == '-')
        throw std::invalid_argument("must be a positive value => " + value);
    
    for (size_t i = 0; i < value.length(); i++) {
        if (!isalnum(value[i]) && value[i] != '.')
            throw std::invalid_argument("bad input => " + value);
    }
    return true;
}

void isOverflow(std::string & n) {
    if (n.length() > 9)
        throw std::overflow_error("too large number");
}

int main(int ac, char const *av[])
{
    
    (void)av;
    if (ac != 2) {
        std::cerr << RED << "error : bad arguments" << RESET << std::endl;
        return 1;
    }

    BitcoinExchange data;
    std::ifstream file("data.csv");
    
    if (!file.is_open()) {
        std::cerr << RED << "error: could not open file" << RESET << std::endl;
        return 1;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        data.addLine(line);
    }

    std::ifstream userFile(av[1]);

    if (!userFile.is_open()) {
        std::cerr << RED << "error: could not open file" << RESET << std::endl;
        return 1;
    }


    std::getline(userFile, line);
    while (std::getline(userFile, line)) {
        try {
            if (!isValidLine(line))
                continue;
            std::string date = line.substr(0, 10);
            std::string value = line.substr(13, line.length() - 13);
            isOverflow(value);
            double n = std::atof(value.c_str());
            
            data.search(date, n);
        } catch(const std::exception& e) {
            std::cerr << "error: " << e.what() << std::endl;
        }
    }
    userFile.close();
    file.close();
    return 0;
}
