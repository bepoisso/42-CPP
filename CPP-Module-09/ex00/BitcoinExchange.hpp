/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:15:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/21 21:47:46 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_ANSI

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define BLUE    "\033[34m"
# define RESET   "\033[0m"

#endif

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <iterator>
#include <exception>
#include <cstdlib>

class BitcoinExchange {
private:
    // Attributes
    std::map<std::string, double> _lst;

public:
    // Canonical Form
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);

/* Operator */

/* Getter / Setter */

/* Methode */
    void addLine(std::string &);
    void isAvaliableLine(std::string &);
    void isDate(std::string &);

    friend std::ostream &operator<<(std::ostream &os, const BitcoinExchange &obj);
};
