/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:29:15 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/10 15:42:40 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
	class formNotSignedException : public std::exception {
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
	AForm(void);
	AForm(std::string newName, int newSignedGrade, int newExecutGrade);
	AForm(const AForm & src);
	virtual ~AForm();
	AForm & operator=(const AForm & rhs);

	/* Operators */

	/* Setter Getter */
	const std::string	getName(void) const ;
	bool 				getSigned(void) const ;
	int			getSignedGrade(void) const ;
	int			getExecuteGrade(void) const ;

	/* Method */
	bool beSigned(Bureaucrat & bur);
	void checkExecutability(const Bureaucrat &executor) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & out, AForm const & value);