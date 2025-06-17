/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:04:40 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 13:38:38 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void printElement(T const &x) {
    std::cout << x << std::endl;
}

template<typename T>
void increment(T &x) {
    ++x;
}

template <typename T>
void doubleValue(T &x) {
    x *= 2;
}

void toUpper(char &c) {
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

template <typename T>
void addExclamation(T &str) {
    str += "!";
}

int main() {
    std::cout << "----------Declaration----------" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    ::iter(arr, 5, printElement);

    std::cout << std::endl << "----------Incrementation----------" << std::endl;
    ::iter(arr, 5, increment);
    ::iter(arr, 5, printElement);

    std::cout << std::endl << "----------DoubleValue----------" << std::endl;
    ::iter(arr, 5, doubleValue);
    ::iter(arr, 5, printElement);

    std::cout << std::endl << "----------String Array----------" << std::endl;
    std::string strs[] = {"Salut", "les", "amis"};
    ::iter(strs, 3, printElement);

    std::cout << std::endl << "----------AddExclamation----------" << std::endl;
    ::iter(strs, 3, addExclamation<std::string>);
    ::iter(strs, 3, printElement);

    std::cout << std::endl << "----------Char Array----------" << std::endl;
    char chars[] = {'a', 'b', 'c', 'd'};
    ::iter(chars, 4, printElement);

    std::cout << std::endl << "----------ToUpper----------" << std::endl;
    ::iter(chars, 4, toUpper);
    ::iter(chars, 4, printElement);

    return 0;
}