/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:00:12 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 15:24:40 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "RPN.hpp"

int main(int ac, char const *av[])
{
    if (ac != 2) {
        std::cerr << RED << "error: bad argument" << RESET << std::endl;
        return 1;
    }
    
    RPN rpn;
    std::string arg = av[1];
    rpn.calculate(arg);

    return 0;
}
