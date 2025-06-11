/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:05:08 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 16:05:21 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const std::string	_target;
    PresidentialPardonForm(const AForm & src);
    PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();

    /* Method */
    void execute(Bureaucrat const & executor) const;
};