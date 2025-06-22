/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:41:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 18:10:22 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PmergeMe.hpp"

int main(int ac, char const *av[])
{
    std::string str[ac - 1];
    
    for (int i = 1; i < ac; i++) {
        str[i - 1] = av[i];
    }
    
    PmergeMe pmm;

    pmm.mergeMe(ac, str);

    return 0;
}
