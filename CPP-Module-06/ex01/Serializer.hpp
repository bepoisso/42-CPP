/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:13:27 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 12:40:57 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
    int value;
};


class Serializer {
private:
    /* Attributes */

    /* Canonical Form */
    Serializer();                                // Default constructor
    Serializer(const Serializer & other);              // Copy constructor
    Serializer & operator=(const Serializer & other);  // Assignent operator
    ~Serializer();                               // Destructor

public:
    /* Methods */
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
