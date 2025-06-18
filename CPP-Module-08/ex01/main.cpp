/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:52:33 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/18 17:25:14 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:20:00 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/18 16:40:00 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

void testSubject() {
    std::cout << "***************Test Subject***************" << std::endl;
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "\e[1;31m[ERROR]\e[0m " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

void testOverfill() {
    std::cout << "***************Test Overfill***************" << std::endl;
    try {
        Span sp = Span(3);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4); // Doit throw
        std::cout << "\e[1;31m[FAIL]\e[0m No exception thrown when overfilling span." << std::endl;
    } catch (const std::exception& e) {
        std::cout << "\e[1;32m[PASS]\e[0m Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

void testNotEnoughNumbers() {
    std::cout << "***************Test Not Enough Numbers***************" << std::endl;
    try {
        Span sp = Span(1);
        sp.addNumber(42);
        sp.shortestSpan();
        std::cout << "\e[1;31m[FAIL]\e[0m No exception thrown with only one number." << std::endl;
    } catch (const std::exception& e) {
        std::cout << "\e[1;32m[PASS]\e[0m Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

void testBigSpan() {
    std::cout << "***************Test Big Span (10 000+)***************" << std::endl;
    try {
        Span sp = Span(10000);
        std::srand(std::time(NULL));
        for (int i = 0; i < 10000; ++i)
            sp.addNumber(std::rand());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "\e[1;31m[ERROR]\e[0m " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

void testIteratorRange() {
    std::cout << "***************Test Add Range***************" << std::endl;
    try {
        std::vector<int> vec;
        for (int i = 0; i < 100; ++i)
            vec.push_back(i * 5);
        
        Span sp = Span(100);
        sp.addRange(vec.begin(), vec.end());

        std::cout << "\e[1;32m[PASS]\e[0m Range added successfully." << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "\e[1;31m[FAIL]\e[0m Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    testSubject();
    testOverfill();
    testNotEnoughNumbers();
    testBigSpan();
    testIteratorRange();
    return 0;
}
