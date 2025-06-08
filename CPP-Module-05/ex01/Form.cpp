/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:12 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 17:07:55 by bepoisso         ###   ########.fr       */
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

Form::Form(std::string newName, int newSignedGrade, int newExecutGrade) : _name(newName), _signed(false), _signedGrade(newSignedGrade), _executeGrade(newExecutGrade) {
	if (_signedGrade < 1 || _executeGrade < 1)
		throw gradeTooHighException();
	else if (_signedGrade > 150 || _executeGrade > 150)
		throw gradeTooLowException();
}

Form::Form(const Form & src) : _name(src._name), _signed(src._signed), _signedGrade(src._signedGrade), _executeGrade(src._executeGrade)
{}

Form::~Form(void)
{}

Form & Form::operator=(const Form & rhs) {
	if (this != &rhs)
	{
		_signed = rhs._signed;
		// Other atribut are const and can't be modify
	}
	return *this;
}

const std::string	Form::getName(void) const  {
	return _name;
}

bool 				Form::getSigned(void) const  {
	return _signed;
}

int			Form::getSignedGrade(void) const  {
	return _signedGrade;
}

int			Form::getExecuteGrade(void) const  {
	return _executeGrade;
}

bool Form::beSigned(Bureaucrat & bur) {
	if (bur.getGrade() <= _signedGrade)
		_signed = true;
	else
		throw gradeTooLowException();
	return _signed;
}


std::ostream & operator<<(std::ostream & out, Form const & value) {
	out << "Form " << value.getName() << 
		": Signed grade=" << value.getSignedGrade() <<
		" Execute grade=" << value.getExecuteGrade() << 
		" Signed=" << value.getSigned() << std::endl;
	return out;
}