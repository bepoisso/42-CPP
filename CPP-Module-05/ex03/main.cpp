/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/11 14:25:26 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>
#include <string>

int main() {
	Intern someRandomIntern;
	AForm* rrf;
	
	std::cout << "----------CAN CREATE----------" << std::endl;
	try {
		
		rrf = someRandomIntern.makeForm("robotomy request", "Robo");
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Shrub");
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Presid");
		delete rrf;
} catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "----------CAN'T CREATE----------" << std::endl;
	try {
		
		rrf = someRandomIntern.makeForm("robotdomy request", "Robototo");
		delete rrf;
		rrf = someRandomIntern.makeForm("shrubbery creadtion", "Shruby");
		delete rrf;
		rrf = someRandomIntern.makeForm("presidefntial pargdo", "Prezid");
		delete rrf;
		rrf = someRandomIntern.makeForm("plop blop", "bipbop");
		delete rrf;
		rrf = someRandomIntern.makeForm("HERMINE PAS CONTENTE", "AGROUGROU");
		delete rrf;
} catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}

/* shrubbery creation
Robotomy request
presidential pardo */