/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:41:25 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 19:13:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _n(0) {
}

PmergeMe::~PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &other) : _n(other._n) {
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
        _n = other._n;
        _vec = other._vec;
        _dq = other._dq;
    }
    return *this;
}

/* Methode */
void PmergeMe::mergeMe(int size, std::string *strs) {
    for (int i = 0; i < size- 1; i++) {
        for (size_t j = 0; strs[i][j]; j++) {
            if (!isdigit(strs[i][j]))
                std::cerr << "error : no digit element found" << std::endl, exit(1);
        }
        long nbr = atol(strs[i].c_str());
        if (nbr < 0 || nbr > __INT_MAX__)
            std::cerr << "error: number not in range 0 -> INT_MAX" << std::endl;
        _vec.push_back(static_cast<int>(nbr));
        _dq.push_back(static_cast<int>(nbr));
        _n++;
    }
    std::cout << "Before: " << *this << std::endl;
    sortVector();
    srotDeque();
}

void PmergeMe::sortVector() {
    std::clock_t clockStart = std::clock();

    std::vector<int> copy = _vec;
    if (copy.size() <= 1)
        return;

    std::vector<std::pair<int, int> > pairs;
    size_t i = 0;
    for (; i + 1 < copy.size(); i += 2) {
        int a = copy[i];
        int b = copy[i + 1];
        pairs.push_back(std::make_pair(std::min(a, b), std::max(a, b)));
    }
    int left = -1;
    if (i < copy.size())
        left = copy[i];
        
    std::vector<int> main;
    std::vector<int> pending;
    for (size_t j = 0; j < pairs.size(); j++) {
        pending.push_back(pairs[j].first);
        main.push_back(pairs[j].second);
    }

    std::sort(main.begin(), main.end());

    for (size_t j = 0; j < pending.size(); j++)
    {
        std::vector<int>::iterator pos = std::lower_bound(main.begin(), main.end(), pending[j]);
        main.insert(pos, pending[j]);
    }
    
    if (left != -1) {
        std::vector<int>::iterator pos = std::lower_bound(main.begin(), main.end(), left);
        main.insert(pos, left);
    }
    
    _vec = main;
    
    std::cout << "After : " << *this << std::endl;
    std::clock_t clockEnd = std::clock();
    double timePassed = static_cast<double>(clockEnd -clockStart) / CLOCKS_PER_SEC * 1000000.0;
    std::cout << "Time to process a range of " << _n << " elements with std::vector : " << timePassed << " us" << std::endl;
}

void PmergeMe::srotDeque() {
    std::clock_t clockStart = std::clock();

    std::deque<int> copy = _dq;
    if (copy.size() <= 1)
        return;

    std::deque<std::pair<int, int> > pairs;
    size_t i = 0;
    for (; i + 1 < copy.size(); i += 2) {
        int a = copy[i];
        int b = copy[i + 1];
        pairs.push_back(std::make_pair(std::min(a, b), std::max(a, b)));
    }
    int left = -1;
    if (i < copy.size())
        left = copy[i];
        
    std::deque<int> main;
    std::deque<int> pending;
    for (size_t j = 0; j < pairs.size(); j++) {
        pending.push_back(pairs[j].first);
        main.push_back(pairs[j].second);
    }

    std::sort(main.begin(), main.end());

    for (size_t j = 0; j < pending.size(); j++)
    {
        std::deque<int>::iterator pos = std::lower_bound(main.begin(), main.end(), pending[j]);
        main.insert(pos, pending[j]);
    }
    
    if (left != -1) {
        std::deque<int>::iterator pos = std::lower_bound(main.begin(), main.end(), left);
        main.insert(pos, left);
    }
    
    _dq = main;
    
    std::clock_t clockEnd = std::clock();
    double timePassed = static_cast<double>(clockEnd -clockStart) / CLOCKS_PER_SEC * 1000000.0;
    std::cout << "Time to process a range of " << _n << " elements with std::deque : " << timePassed << " us" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const PmergeMe &obj) {
	for (std::vector<int>::const_iterator it = obj._vec.begin(); it != obj._vec.end(); ++it)
	    os << *it << " ";
return os;
}
