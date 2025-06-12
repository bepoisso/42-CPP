/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:55:51 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/12 14:56:34 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ScalarConverter {
private:
    /* Attributes */
    
    /* Canonical Form */
    ScalarConverter();                                            // Default constructor
    ScalarConverter(const ScalarConverter & other);               // Copy constructor
    
    /* Methods */
    static bool isChar(const std::string & str);
    static bool isInt(const std::string & str);
    static bool isFloat(const std::string & str);
    static bool isPseudoFloat(const std::string & str);
    static bool isDouble(const std::string & str);
    static bool isPseudoDouble(const std::string & str);

    static void fromChar(char c);
    static void fromInt(int i);
    static void fromFloat(float f);
    static void fromDouble(double d);

    
    
public:
    /* Canonical Form */
    ~ScalarConverter();                                             // Destructor
    ScalarConverter & operator=(const ScalarConverter & other);     // Assignent operator

    static void convert(const std::string & literal);
};

