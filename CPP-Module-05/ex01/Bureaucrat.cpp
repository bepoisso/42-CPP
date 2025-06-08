/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:54 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 17:07:27 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Exception */
const char * Bureaucrat::gradeTooHighException::what() const throw() {
	return "bureaucrat error : grade to high";
}

const char * Bureaucrat::gradeTooLowException::what() const throw() {
	return "bureaucrat error: grade to low";
}

Bureaucrat::Bureaucrat(void) : _name("Visitor"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : _name(newName), _grade(newGrade){
	if (_grade < 1)
		throw gradeTooHighException();
	else if (_grade > 150)
		throw gradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (&rhs != this) {
		_name = rhs._name;
		_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
}

/* Getter / Setter */
std::string const Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

/* Function */
void	Bureaucrat::promotGrade(void) {
	if (_grade - 1 < 1)
		throw gradeTooHighException();
	_grade--;
}
void	Bureaucrat::demotGrade(void) {
	if (_grade + 1 > 150)
		throw gradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form & form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << _name << " couldn't sign " << form.getName() << " because: " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & value) {
	out << value.getName() << ", bureaucrat grade " << value.getGrade() << std::endl;
	return (out);
}
