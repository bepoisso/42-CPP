/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:13:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 12:42:37 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data = {42};

    uintptr_t raw = reinterpret_cast<uintptr_t>(&data);
    Data* ptr = reinterpret_cast<Data*>(raw);

    std::cout << "----------Success----------" << std::endl << ptr->value << std::endl;
}