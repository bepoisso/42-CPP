/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:58:51 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 15:46:22 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const AForm & src) : _target(src.getName()) {
    
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs) {
    if (this != &rhs) {
        // Cant assigne const atribut
    }
    return *this;
}


/* Method */
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    checkExecutability(executor);
    std::string name = this->getName() + "_shrubbery";

    std::ofstream file(name.c_str());
    file << "                  %%%,%%%%%%%" << std::endl
     << "                   ,'%% \\\\-*%%%%%%%" << std::endl
     << "             ;%%%%%*%   _%%%%\"" << std::endl
     << "              ,%%%       \\(_.*%%%%." << std::endl
     << "              % *%%, ,%%%%*(    '" << std::endl
     << "            %^     ,*%%% )\\|,%%*%,_" << std::endl
     << "                 *%    \\/ #).-\"*%%*" << std::endl
     << "                     _.) ,/ *%," << std::endl
     << "             _________/)#(_____________" << std::endl;
    file.close();
}