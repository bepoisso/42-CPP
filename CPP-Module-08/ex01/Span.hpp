/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:52:53 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/19 11:31:38 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span {
private:
    /* Attributes */
    unsigned int _size;
    std::vector<int> _data;

public:
    /* Canonical Form */
    Span();                                // Default Constructor
    Span(unsigned int n);                  // Constructor
    ~Span();                               // Destructor
    Span(const Span & other);              // Copy constructor
    Span & operator=(const Span & other);  // Assignent operator

    /* Operators */

    /* Getters & Setters */

    /* Methods */
    void addNumber(int n);
    int shortestSpan() const;
    int longestSpan() const;

    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        size_t distance = std::distance(begin, end);
        if (_data.size() + distance > _size)
            throw std::out_of_range("Not enough space in Span to add range");
        _data.insert(_data.end(), begin, end);
    }
};
