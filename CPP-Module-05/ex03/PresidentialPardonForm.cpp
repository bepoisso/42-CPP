/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:05:42 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 16:07:00 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5) {
    
}

PresidentialPardonForm::PresidentialPardonForm(const AForm & src) : _target(src.getName()) {
    
}

PresidentialPardonForm::~PresidentialPardonForm() {
    
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs) {
    if (this != &rhs) {
        // Cant assigne const atribut
    }
    return *this;
}


/* Method */
void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecutability(executor);
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}