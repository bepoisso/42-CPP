/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:04:29 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 15:50:29 by bepoisso         ###   ########.fr       */
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
#include <stack>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

class RPN {
private:
    // Attributes
    std::stack<int> _stack;

    /* Methode */
    bool isOperator(char);
    bool isDigit(char);
    void applyOperator(std::string &);

public:
    // Canonical Form
    RPN();
    ~RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);

/* Operator */

/* Getter / Setter */

/* Methode */
    void calculate(std::string &);
};
