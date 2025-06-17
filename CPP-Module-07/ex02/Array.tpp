/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:49:10 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 14:11:57 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n){
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
Array<T>::Array(const Array<T> & other) : _array(NULL), _size(0) {
    *this = other;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & other) {
    if (this != &other) {
        delete[] _array;
        _size = other._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return *this;
}

    /* Operators */
template <typename T>
T & Array<T>::operator[](unsigned int index) {
    if (index >= _size)
        throw std::out_of_range("error: index out of bounds");
    return _array[index];
}

template <typename T>
const T & Array<T>::operator[](unsigned int index) const {
    if (index >= _size)
        throw std::out_of_range("error: index out of bounds");
    return _array[index];
}


/* Getters & Setters */
template <typename T>
unsigned int Array<T>::getSize() const {
    return _size;
}
    
