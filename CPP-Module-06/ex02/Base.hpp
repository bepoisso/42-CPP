/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:31:12 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/16 13:55:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base {
public:
    Base() {};
    virtual ~Base() {};
};

class A : public Base {
public:
    A() {};
    ~A() {};
};
class B : public Base {
public:
    B() {};
    ~B() {};
};
class C : public Base {
public:
    C() {};
    ~C() {};
};
