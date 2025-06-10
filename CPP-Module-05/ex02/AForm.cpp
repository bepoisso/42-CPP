/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:12 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 17:07:55 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Exception */
const char * AForm::gradeTooHighException::what() const throw() {
	return "Form error: grade to high";
}

const char * AForm::gradeTooLowException::what() const throw() {
	return "Form error: grade to low";
}

const char *AForm::formNotSignedException::what() const throw() {
    return "Form error: not signed";
}


AForm::AForm(void) : _name("Default"), _signed(false), _signedGrade(150), _executeGrade(150)
{}

AForm::AForm(std::string newName, int newSignedGrade, int newExecutGrade) : _name(newName), _signed(false), _signedGrade(newSignedGrade), _executeGrade(newExecutGrade) {
	if (_signedGrade < 1 || _executeGrade < 1)
		throw gradeTooHighException();
	else if (_signedGrade > 150 || _executeGrade > 150)
		throw gradeTooLowException();
}

AForm::AForm(const AForm & src) : _name(src._name), _signed(src._signed), _signedGrade(src._signedGrade), _executeGrade(src._executeGrade)
{}

AForm::~AForm(void)
{}

AForm & AForm::operator=(const AForm & rhs) {
	if (this != &rhs)
	{
		_signed = rhs._signed;
		// Other atribut are const and can't be modify
	}
	return *this;
}

const std::string	AForm::getName(void) const  {
	return _name;
}

bool 				AForm::getSigned(void) const  {
	return _signed;
}

int			AForm::getSignedGrade(void) const  {
	return _signedGrade;
}

int			AForm::getExecuteGrade(void) const  {
	return _executeGrade;
}

bool AForm::beSigned(Bureaucrat & bur) {
	if (bur.getGrade() <= _signedGrade)
		_signed = true;
	else
		throw gradeTooLowException();
	return _signed;
}

void AForm::checkExecutability(const Bureaucrat &executor) const {
    if (!_signed)
        throw formNotSignedException();
    if (executor.getGrade() > _executeGrade)
        throw gradeTooLowException();
}


std::ostream & operator<<(std::ostream & out, AForm const & value) {
	out << "AForm " << value.getName() << 
		": Signed grade=" << value.getSignedGrade() <<
		" Execute grade=" << value.getExecuteGrade() << 
		" Signed=" << value.getSigned() << std::endl;
	return out;
}