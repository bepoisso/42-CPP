/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:40:51 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 14:22:30 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <ctime>
#include <cstdlib>

template <typename T>
class Array {
private:
    /* Attributes */
    T*              _array;
    unsigned int    _size;

public:
    /* Canonical Form */
    Array();                                // Default constructor
    Array(unsigned int n);               // Constructor
    ~Array();                               // Destructor
    Array(const Array & other);             // Copy constructor
    Array & operator=(const Array & other); // Assignent operator

    /* Operators */
    T & operator[](unsigned int index);
    const T & operator[](unsigned int index) const;

    /* Getters & Setters */
    unsigned int getSize() const;

};


#include "Array.tpp"