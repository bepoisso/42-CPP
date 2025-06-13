/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:08:29 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/13 11:56:02 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScalarConverter.hpp"

int main(int ac, char const *av[])
{
    if (ac != 2) {   
        std::cout << "error: bad arguments" << std::endl << "usage: ./convert <literal>" << std::endl;
        return(1);
    }
    ScalarConverter::convert(av[1]);
    return 0;
}
