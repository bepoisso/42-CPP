/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:22:14 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/12 13:22:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string str;
	bool check = true;

	while (check)
	{
		std::cout << "Enter a cmd : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (std::cerr << std::endl << "error: Ctrl+D detected" << std::endl, 1);
		else if (str == "ADD")
			phonebook.addContact();
		else if (str == "SEARCH")
			phonebook.displayContact();
		else if (str == "EXIT")
			check = false;
	}
	return 0;
}
