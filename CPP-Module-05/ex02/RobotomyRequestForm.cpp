/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:49:31 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 16:04:06 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45) {
    
}

RobotomyRequestForm::RobotomyRequestForm(const AForm & src) : _target(src.getName()) {
    
}

RobotomyRequestForm::~RobotomyRequestForm() {
    
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs) {
    if (this != &rhs) {
        // Cant assigne const atribut
    }
    return *this;
}


/* Method */
void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkExecutability(executor);

    srand (time(NULL));
    std::cout << "*drilling noise*" << std::endl;
    if (rand() % 2)
        std::cout << this->getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed for " << this->getName() << std::endl;
}