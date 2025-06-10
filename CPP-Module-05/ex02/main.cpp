/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 16:11:06 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

int main() {
	try {
		Bureaucrat bob("Bob", 1);
		Bureaucrat jim("Jim", 140);
		Bureaucrat sam("Sam", 50);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm robot("Marvin");
		PresidentialPardonForm pardon("Ford");

		jim.signForm(shrub);
		jim.executeForm(shrub);
		bob.executeForm(shrub);
		std::cout << std::endl;
		sam.signForm(robot);
		sam.executeForm(robot);
		bob.executeForm(robot);
		std::cout << std::endl;
		bob.signForm(pardon);
		bob.executeForm(pardon);
		std::cout << std::endl;
		ShrubberyCreationForm testFail("park");
		bob.executeForm(testFail);

	} catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}