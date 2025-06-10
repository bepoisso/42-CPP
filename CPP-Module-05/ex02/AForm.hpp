/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 17:17:33 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	/* Exception */
	class gradeTooHighException : public std::exception {
		public :
			const char * what() const throw();
	};
	class gradeTooLowException : public std::exception {
		public :
			const char * what() const throw();
	};

private:
	const std::string	_name;
	bool				_signed;
	const int			_signedGrade;
	const int			_executeGrade;

public:
	/* Canonical */
	Form(void);
	Form(std::string newName, int newSignedGrade, int newExecutGrade);
	Form(const Form & src);
	virtual ~Form();
	Form & operator=(const Form & rhs);

	/* Operators */

	/* Setter Getter */
	const std::string	getName(void) const ;
	bool 				getSigned(void) const ;
	int			getSignedGrade(void) const ;
	int			getExecuteGrade(void) const ;

	/* Functions */
	bool beSigned(Bureaucrat & bur);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & out, Form const & value);