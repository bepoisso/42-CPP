/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:43:35 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 15:43:20 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string	_target;
    ShrubberyCreationForm(const AForm & src);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();

    /* Method */
    void execute(Bureaucrat const & executor) const;
};