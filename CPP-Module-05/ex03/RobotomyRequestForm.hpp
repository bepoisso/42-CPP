/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:47:22 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 15:47:38 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    const std::string	_target;
    RobotomyRequestForm(const AForm & src);
    RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();

    /* Method */
    void execute(Bureaucrat const & executor) const;
};