/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/11 13:30:13 by bepoisso         ###   ########.fr       */
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
	try {
		Intern someRandomIntern;
		AForm* rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
} catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return 0;
}