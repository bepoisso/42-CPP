/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:13:25 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 12:39:39 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

    /* Canonical Form */
Serializer::Serializer() {
}

Serializer::~Serializer() {
}

Serializer::Serializer(const Serializer & other) {
    (void)other;
}

Serializer & Serializer::operator=(const Serializer & other) {
    if (this != &other) {
    }
    return *this;
}

    /* Methods */
uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
