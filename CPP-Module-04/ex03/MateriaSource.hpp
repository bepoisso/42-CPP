/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:21:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/05 15:29:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource
{
private:
    /* data */
public:
    MateriaSource();
    MateriaSource(const MateriaSource & src);
    const MateriaSource & operator=(const MateriaSource & rhs);
    ~MateriaSource();

    /* Methods */
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};