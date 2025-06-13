/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:55:48 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/13 14:46:29 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    /* Canonical Form */
ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter & other) {
    (void)other;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & other) {
    if (this != &other) {
    }
    return *this;
}

/* Methods */

void ScalarConverter::convert(const std::string & literal) {
    std::string s = literal;
    if (isChar(literal))
        fromChar(literal[0]);
    else if (isInt(literal))
        fromInt(std::atoi(literal.c_str()));
    else if (isFloat(literal))
        fromFloat(std::atof(literal.c_str()));
    else if (isDouble(literal))
        fromDouble(std::atof(literal.c_str()));
    else
        std::cout << "Unknow literal type" << std::endl;
}

bool ScalarConverter::isChar(const std::string & str) {
    if (str.length() != 1)
        return false;
    if (!std::isprint(str[0]) || std::isdigit(str[0]))
        return false;
    return true;
}

bool ScalarConverter::isInt(const std::string & str) {
    size_t start = 0;
    if (str.empty())
        return false;
    if (str[0] == '+' || str[0] == '-')
        start = 1;
    if (start == str.length())
        return false;

    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

bool ScalarConverter::isFloat(const std::string & str) {
     if (isPseudoFloat(str))
        return true;
    
    int len = str.length();
    if (len < 2 || str[len - 1] != 'f')
        return false;

    std::string num = str.substr(0, len - 1);

    bool point = false;
    int start = 0;
    
    for (size_t i = start; i < num.length(); i++) {
        if (num[i] == '.') {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(num[i]))
            return false;
    }
    return point;
}

bool ScalarConverter::isPseudoFloat(const std::string & str) {
    if (str == "nanf" || str == "+inff" || str == "-inff")
        return true;
    return false;
}

bool ScalarConverter::isDouble(const std::string & str) {
    if (isPseudoDouble(str))
        return true;
    
    bool point = false;
    int start = 0;

    if (str.empty())
        return false;
    if (str[0] == '+' || str[0] == '-')
        start = 1;

    for (size_t i = start; i < str.length(); i++) {
        if (str[i] == '.') {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(str[i]))
            return false;
    }
    return point;
}

bool ScalarConverter::isPseudoDouble(const std::string & str) {
    if (str == "nan" || str == "+inf" || str == "-inf")
        return true;
    return false;
}


void ScalarConverter::fromChar(char c) {
    std::cout << "----------From char call----------" << std::endl;
    if (c < 32 || c > 126)
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c)
        << "." << (static_cast<float>(c) - static_cast<int>(c)) 
        << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c)
        << "." << (static_cast<double>(c) - static_cast<int>(c)) << std::endl;
}

void ScalarConverter::fromInt(int i) {
    std::cout << "----------From int call----------" << std::endl;
    if (i < 32 || i > 126)
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i)
        << "." << (static_cast<float>(i) - static_cast<int>(i)) 
        << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i)
        << "." << (static_cast<double>(i) - static_cast<int>(i)) << std::endl;
}

void ScalarConverter::fromFloat(double f) {
    std::cout << "----------From float call----------" << std::endl;
    if (f < 32 || f > 126)
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << static_cast<char>(f) << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
    std::cout << "double: " << f << std::endl;
}

void ScalarConverter::fromDouble(double d) {
    std::cout << "----------From int double----------" << std::endl;
    if (d < 32 || d > 126)
        std::cout << "char: Non displayable" << std::endl;
    else 
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}