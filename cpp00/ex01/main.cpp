/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:22:14 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/08 16:23:24 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	print_header(void)
{
	std::cout << "+----------------------------------------+" << std::endl;
	std::cout << "|                                        |" << std::endl;
	std::cout << "|    WELCOME TO MYY AWESOME PHONEBOOK    |" << std::endl;
	std::cout << "|                                        |" << std::endl;
	std::cout << "|                         by bepoisso 🐟 |" << std::endl;
	std::cout << "+----------------------------------------+" << std::endl;
}

int main(void)
{
	char buff[4096];

	print_header();
	std::cout << "Enter a cmd : ";
	std::cin >> buff;
	
	return 0;
}
