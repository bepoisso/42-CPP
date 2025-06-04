/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/04 17:01:59 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

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
	~Form();
	Form & operator=(const Form & rhs);

	/* Operators */

	/* Setter Getter */
	const std::string	getName(void) const ;
	bool 				getSigned(void) const ;
	const int			getSignedGrade(void) const ;
	const int			getExecuteGrade(void) const ;

	/* Functions */
	bool beSigned(Bureaucrat & bur);
};

std::ostream operator<<(std::ostream os, const Form & src);