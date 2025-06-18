/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:50:13 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/18 14:19:16 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

void testVector() {
    std::cout << "***************Test vector***************" << std::endl;
    
    std::vector<int> vec;

    std::cout << "---Init vector list---" << std::endl;
    for (size_t i = 0; i < 5; i++) {
        vec.push_back(i * 10);
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl << std::endl;
    
    std::cout << "---EasyFind Vector PASS---" << std::endl;
    try {
        for (int i = 0; i < 5; i++)
        {
            int j = i * 10;
            std::vector<int>::const_iterator found = easyfind(vec, j);
            (void)found;
            std::cout << "\e[1;32m[PASS]\e[0m Found " << j << " in vector" << std::endl;   
        }
    }
    catch(const std::exception& e) {
        std::cerr << "\e[1;31m[FAIL]\e[0m error: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    
    std::cout << "---EasyFind Vector FAIL---" << std::endl;
    try {
        std::vector<int>::const_iterator found = easyfind(vec, 42);
        (void)found;
        std::cout << "\e[1;31m[FAIL]\e[0m Found 42 in vector" << std::endl;   
    }
    catch(const std::exception& e) {
        std::cerr << "\e[1;32m[PASS]\e[0m error: " << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;
}

void testList() {
    std::cout << "***************Test list***************" << std::endl;
    
    std::list<int> lst;

    std::cout << "---Init vector list---" << std::endl;
    for (size_t i = 0; i < 5; i++) {
        lst.push_back(i);
        std::cout << i << ", ";
    }
    std::cout << std::endl << std::endl;;


    std::cout << "---EasyFind Vector PASS---" << std::endl;
    try
    {
        for (int i = 0; i < 5; i++)
        {
            std::list<int>::const_iterator found = easyfind(lst, i);
            (void)found;
            std::cout << "\e[1;32m[PASS]\e[0m Found " << i << " in list" << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "\e[1;31m[FAIL]\e[0m error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "---EasyFind Vector FAIL---" << std::endl;
    try
    {
        std::list<int>::const_iterator found = easyfind(lst, 42);
        (void)found;
        std::cout << "\e[1;31m[FAIL]\e[0m Found 42 in list" << std::endl;   
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "\e[1;32m[PASS]\e[0m error: " << e.what() << std::endl;
    }
}

int main(void) {
    testVector();
    testList();
    return 0;
}
