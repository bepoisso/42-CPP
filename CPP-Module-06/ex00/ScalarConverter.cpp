/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:55:48 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/12 15:08:11 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    /* Canonical Form */
ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter & other) {
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & other) {
    if (this != &other) {
    }
    return *this;
}

/* Methods */

void ScalarConverter::convert(const std::string & literal) {
    if (isChar(literal))
        fromChar(literal[0]);
    else if (isInt(literal))
        fromInt(std::stoi(literal));
    else if (isFloat(literal))
        fromFloat(std::stof(literal));
    else if (isDouble(literal))
        fromDouble(std::stod(literal));
    else
        std::cout << "Unknow literal type" << std::endl;
}

bool ScalarConverter::isChar(const std::string & str) {
    if (str.length() != 1)
        return false;
    if (!std::isprint(str[0]) && std::isdigit(str[0]))
        return false;
    return true;
}

bool ScalarConverter::isInt(const std::string & str) {
    int start = 0;
    if (str.empty())
        return false;
    if (str[0] == '+' || str[0] == '-')
        start = 1;
    if (start == str.length())
        return false;

    for (int i = 0; i < str.length(); i++) {
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
    
    for (int i = start; i < num.length(); i++) {
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

    for (int i = start; i < str.length(); i++) {
        if (str[i] == '.') {
            if (point)
                return false;
            point = true;
        }
        else if (!std::isdigit(str[i]))
            return point;
    }
    return true;
}

bool ScalarConverter::isPseudoDouble(const std::string & str) {
    if (str == "nan" || str == "+inf" || str == "-inf")
        return true;
    return false;
}


void ScalarConverter::fromChar(char c) {
    std::cout << "char: " << c << std::endl
        << "int: " << static_cast<int>(c) << std::endl
        << "float :" << static_cast<float>(c) << "f" << std::endl
        << "double :" << static_cast<double>(c) << std::endl; 
}

void ScalarConverter::fromInt(int i) {
    std::cout << "char: " << static_cast<char>(i) << std::endl
        << "int: " << i << std::endl
        << "float :" << static_cast<float>(i) << "f" << std::endl
        << "double :" << static_cast<double>(i) << std::endl; 
}

void ScalarConverter::fromFloat(float f) {
    std::cout << "char: " << static_cast<char>(f) << std::endl
        << "int: " << static_cast<int>(f) << std::endl
        << "float :" << f << "f" << std::endl
        << "double :" << static_cast<double>(f) << std::endl; 
}

void ScalarConverter::fromDouble(double d) {
    std::cout << "char: " << static_cast<char>(d) << std::endl
        << "int: " << static_cast<int>(d) << std::endl
        << "float :" << static_cast<float>(d) << "f" << std::endl
        << "double :" << d << std::endl; 
}
