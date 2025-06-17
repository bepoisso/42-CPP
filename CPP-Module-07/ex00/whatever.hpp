/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:45:45 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 12:48:56 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const & min(T const & a, T const & b){
    return (a < b ? a : b);
}

template <typename T>
T const & max(T const & a, T const & b){
    return (a > b ? a : b);
}
