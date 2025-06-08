/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:04:49 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/08 16:44:43 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat boss("Boss", 1);
	Bureaucrat visitor;
	Bureaucrat midleMan("Gilbert", 150/2);

	Form high("Important", 1, 1);
	Form mid("Midportant", 150/2, 150/2);
	Form low("Lowportant", 150, 150);

	std::cout << std::endl << "----------Bureaucrates----------" << std::endl;
	std::cout << boss << visitor << midleMan;
	std::cout << std::endl << "----------Forms----------" << std::endl;
	std::cout << high << mid << low;
	
	
	std::cout << std::endl << std::endl << std::endl;
	std::cout << std::endl << "----------Can't Sign Form----------" << std::endl;
	try
	{
		visitor.signForm(high);
		visitor.signForm(mid);
		midleMan.signForm(high);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		visitor.signForm(mid);
		midleMan.signForm(high);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		midleMan.signForm(high);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------Can Sign Form----------" << std::endl;
	try
	{
		boss.signForm(high);
		boss.signForm(mid);
		boss.signForm(low);
		midleMan.signForm(mid);
		midleMan.signForm(low);
		visitor.signForm(low);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------Bureaucrates----------" << std::endl;
	std::cout << boss << visitor << midleMan;
	std::cout << std::endl << "----------Forms----------" << std::endl;
	std::cout << high << mid << low;
	return 0;
}