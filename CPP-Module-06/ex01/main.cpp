/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:13:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 13:02:23 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <limits.h>
#include "Serializer.hpp"

int main(int ac, char **av) {
    
    std::string nbr = av[0];
    if (ac != 2) {
        std::cout << "error: bad arguments" << std::endl << "usage: ./serialize <Number>" << std::endl;
        return EXIT_FAILURE;
    }
    long int i = std::atol(av[1]);
    if (i > INT_MAX || i < INT_MIN || i == 0) {
        std::cout << "error: need int as number and can not be zero" << std::endl;
        return EXIT_FAILURE;
    }
    
    Data data = {i};

    uintptr_t raw = reinterpret_cast<uintptr_t>(&data);
    Data* ptr = reinterpret_cast<Data*>(raw);

    std::cout << "----------Success----------" << std::endl << ptr->value << std::endl;
    return EXIT_SUCCESS;
}