/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:52:41 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/18 17:28:49 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

    /* Canonical Form */
Span::Span() : _size(0) {
}

Span::Span(unsigned int n) : _size(n) {
}

Span::~Span() {
}

Span::Span(const Span & other) : _size(other._size), _data(other._data) {
}

Span & Span::operator=(const Span & other) {
    if (this != &other) {
        _size = other._size;
        _data = other._data;
    }
    return *this;
}


    /* Methods */
void Span::addNumber(int n) {
    if (_data.size() >= _size)
        throw std::out_of_range("span is alrady full");
    _data.push_back(n);
}

int Span::shortestSpan() const {
    if (_data.size() < 2)
        throw std::out_of_range("not enough elements to find a span");
    
    std::vector<int> tmp = _data;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = tmp[1] - tmp[0];
    for (size_t i = 0; i < tmp.size() - 1; i++) {
        int span = tmp[i + 1] - tmp[i];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_data.size() < 2)
        throw std::runtime_error("not enough elements to find a span");

    int min = *std::min_element(_data.begin(), _data.end());
    int max = *std::max_element(_data.begin(), _data.end());
    return max - min;
}
    