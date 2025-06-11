/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:55:06 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/11 11:47:26 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "AForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    Intern(const Intern & src);
    const Intern & operator=(const Intern & src);
    ~Intern();

    AForm* makeForm(std::string formName, std::string formTarget);
};