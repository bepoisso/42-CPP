/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:40:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/19 13:12:32 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T> class MutantStack : public std::stack<T> {
private:
    /* Attributes */

public:
    /* Canonical Form */
    MutantStack() {}                                                              // Default constructor
    ~MutantStack() {}                                                             // Destructor
    MutantStack(const MutantStack & other) : std::stack<T>(other) {}             // Copy constructor
    MutantStack & operator=(const MutantStack & other) {                          // Assignent operator
        if (this != &other)
            std::stack<T>::operator=(other);
        return *this;
    }

    /* Iterator Support */
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    /* Methods */
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() { return this->c.begin(); }
    reverse_iterator rend() { return this->c.end(); }

    const_reverse_iterator rbegin() const { return this->c.begin(); }
    const_reverse_iterator rend() const { return this->c.end(); }

};
