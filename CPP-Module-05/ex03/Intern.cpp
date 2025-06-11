/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:08:44 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/11 14:24:40 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern & src) {
    (void)src;
}

const Intern & Intern::operator=(const Intern & src) {
    (void)src;
    return *this;
}

Intern::~Intern() {
}


AForm* Intern::makeForm(std::string formName, std::string formTarget) {
    std::string existing[3] =  {"shrubbery creation", "robotomy request", "presidential pardon"};
    int index = -1;
    AForm* form = NULL;

    while (++index < 3) {
        if (existing[index] == formName)
            break;
    }
    
    switch (index) {
        case 0 :
            form = new ShrubberyCreationForm(formTarget);
            std::cout << "Intern creates " << form->getName() << std::endl;
            break;
        case 1 :
            form = new RobotomyRequestForm(formTarget);
            std::cout << "Intern creates " << form->getName() << std::endl;
            break;
        case 2 :
            form = new PresidentialPardonForm(formTarget);
            std::cout << "Intern creates " << form->getName() << std::endl;
            break;
        default :
            std::cout << "error: Intern can not create form. Form \"" << formName << "\" dose not exist" << std::endl;
    }
    return form;
}
