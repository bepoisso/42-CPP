/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:40:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/19 14:52:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

void testMutantStack() {
    std::cout << "*************** Test MutantStack ***************" << std::endl;

    MutantStack<int> mstack;

    std::cout << "--- Test push / top ---" << std::endl;
    mstack.push(5);
    mstack.push(17);
    if (mstack.top() == 17)
        std::cout << "\033[1;32m[PASS]\033[0m top() == 17" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m top() != 17 (got " << mstack.top() << ")" << std::endl;

    std::cout << "--- Test pop / size ---" << std::endl;
    mstack.pop();
    if (mstack.size() == 1)
        std::cout << "\033[1;32m[PASS]\033[0m size() == 1" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m size() != 1 (got " << mstack.size() << ")" << std::endl;

    std::cout << "--- Test push plusieurs valeurs ---" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    if (mstack.size() == 5)
        std::cout << "\033[1;32m[PASS]\033[0m size() == 5" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m size() != 5 (got " << mstack.size() << ")" << std::endl;

    std::cout << "--- Iterator test begin / end ---" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    int count = 0;
    std::cout << "Stack value :" << std::endl;
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
        ++count;
    }
    std::cout << std::endl;
    if (count == 5)
        std::cout << "\033[1;32m[PASS]\033[0m 5 elements in stack" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m ellements in stack != 5 (got " << count << ")" << std::endl;

    std::cout << "--- Copy constructor ---" << std::endl;
    MutantStack<int> copy(mstack);
    if (copy.size() == mstack.size() && copy.top() == mstack.top())
        std::cout << "\033[1;32m[PASS]\033[0m copy ok (same size)" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m invalid copy" << std::endl;

    std::cout << "--- Assignation Test ---" << std::endl;
    MutantStack<int> assign;
    assign = mstack;
    if (assign.size() == mstack.size() && assign.top() == mstack.top())
        std::cout << "\033[1;32m[PASS]\033[0m assignation ok (same size)" << std::endl;
    else
        std::cout << "\033[1;31m[FAIL]\033[0m invalid assignation" << std::endl;

    std::cout << std::endl;
}

int main() {
    testMutantStack();
    return 0;
}
