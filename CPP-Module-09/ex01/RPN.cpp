/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:06:09 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 16:32:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

RPN::RPN(const RPN &other) : _stack(other._stack) {
}

RPN &RPN::operator=(const RPN &other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

/* Operator */

/* Getter / Setter */

/* Methode */
bool RPN::isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

bool RPN::isDigit(char c) {
    return (isdigit(c));
}

void RPN::applyOperator(std::string & op) {
    
    int b = _stack.top();
    _stack.pop();
    int a = _stack.top();
    _stack.pop();

    if (op == "+")
        _stack.push(a + b);
    if (op == "-")
        _stack.push(a - b);
    if (op == "*")
        _stack.push(a * b);
    if (op == "/") {
        if (b == 0)
            std::cerr << "error: div by 0" << std::endl, exit(1);
        _stack.push(a / b);
    }
}

void RPN::calculate(std::string & arg) {
    std::istringstream iss(arg);
    std::string token;

    while (iss >> token)
    {
        if (isdigit(token[0]) && !token[1]) {
            _stack.push(std::atoi(token.c_str()));
        }
        else if (isOperator(token[0]) && !token[1]) {
            if (_stack.size() < 2)
                std::cerr << "error: bad logic" << std::endl, exit(1);
            applyOperator(token);
        }
        else
            std::cerr << "error: bad input" << std::endl, exit(1);

    }
    if (_stack.size() == 1)
        std::cout << _stack.top() << std::endl;
    else
        std::cerr << "error: bad logic input" << std::endl, exit(1);
}
