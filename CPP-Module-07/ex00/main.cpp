/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:45:41 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 13:01:21 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "whatever.hpp"

int main(int ac, char **av) {
    
    if (ac != 3) {
        std::cout << "error: bad arguments" << std::endl;
        std::cout << "usage: ./exec <nbr1> <nbr2>" << std::endl;
        return EXIT_FAILURE;
    }
    int a = std::atoi(av[1]);
    int b = std::atoi(av[2]);

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << std::endl << "----------1st----------" << std::endl;
    ::swap( a, b );
    std::cout << "swap( a, b ) a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    
    std::cout << std::endl << "----------2nd----------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "swap( c, d ) c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return EXIT_SUCCESS;
}