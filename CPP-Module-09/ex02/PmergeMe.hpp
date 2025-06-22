/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:41:30 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 18:34:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <iterator>
#include <cstdlib>
#include <algorithm>
#include <ctime>

class PmergeMe {
private:
// Attributes
    std::vector<int> _vec;
    std::deque<int> _dq;
    unsigned int _n;

/* Methode */
    void sortVector();
    void srotDeque();
public:
    // Canonical Form
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

/* Operator */

/* Getter / Setter */

/* Methode */
    void mergeMe(int, std::string *);

    friend std::ostream &operator<<(std::ostream &os, const PmergeMe &obj);
};
