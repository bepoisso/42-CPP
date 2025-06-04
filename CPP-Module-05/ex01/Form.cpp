/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:12 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/04 17:09:55 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/* Exception */
const char * Form::gradeTooHighException::what() const throw() {
	return "form error: grade to high";
}

const char * Form::gradeTooLowException::what() const throw() {
	return "form error: grade to low";
}


Form::Form(void) : _name("Default"), _signed(false), _signedGrade(150), _executeGrade(150)
{}

Form::Form(std::string newName, int newSignedGrade, int newExecutGrade) : _name(newName), _signed(false), _signedGrade(newSignedGrade), _executeGrade(newExecutGrade)
{}

Form::Form(const Form & src) : _name(src._name), _signed(src._signed), _signedGrade(src._signedGrade), _executeGrade(src._executeGrade)
{}

Form::~Form(void)
{}

Form & Form::operator=(const Form & rhs) {
	if (this != &rhs)
	{
		setName(rhs._name);
		_signed = rhs._signed;
		// Ajjouter les setter et le reste
	}
}
