/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:04:38 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 13:34:59 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void iter(T* array,size_t length, void(*f)(T &)) {
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template<typename T>
void iter(const T* array,size_t length, void(*f)(const T &)) {
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}