/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/04 15:31:01 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat boss("Boss", 1);
	Bureaucrat visitor;
	Bureaucrat midleMan("Gilbert", 150/2);

	std::cout << boss << visitor << midleMan;
	
	std::cout << std::endl << "----------Try to promot a grade 1----------" << std::endl;
	try
	{
		std::cout << boss;
		boss.promotGrade();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	std::cout << std::endl  << "----------Try to demote a grade 150----------" << std::endl;
	try
	{
		std::cout << visitor;
		visitor.demotGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl  << "----------Try to promot a grade 75 to grade 0----------" << std::endl;
	try
	{
		std::cout << midleMan;
		for (int i = 0; i < 75; i++) {
			midleMan.promotGrade();
			std::cout << midleMan;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl  << "----------Try to demote a grade 1 to grade 151----------" << std::endl;
	try
	{
		std::cout << midleMan;
		for (int i = 0; i < 150; i++) {
			midleMan.demotGrade();
			std::cout << midleMan;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}