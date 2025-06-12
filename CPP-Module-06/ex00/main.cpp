/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:08:29 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/12 15:11:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScalarConverter.hpp"

int main(int ac, char const *av[])
{
    if (ac != 2) {   
        std::cout << "error: bad arguments" << std::endl;
        return(1);
    }
    (void)av;
    return 0;
}
