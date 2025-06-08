/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:52 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 16:42:27 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
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
	std::string	_name;
	int			_grade;

public:

	/* Canonical */
	Bureaucrat(void);
	Bureaucrat(std::string newName, int newGrade);
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat& operator=(const Bureaucrat& rhs);
	~Bureaucrat(void);

	/* Getter / Setter */
	std::string const getName(void) const;
	int getGrade(void) const;

	/* Function */
	void	promotGrade(void);
	void	demotGrade(void);
	void	signForm(Form & form);
};

std::ostream & operator<<(std::ostream & out, Bureaucrat const & value);