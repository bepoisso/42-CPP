/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:22:14 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/09 17:03:51 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
		if (str == "ADD")
			phonebook.addContact();
		else if (str == "SEARCH")
			phonebook.displayContact();
		else if (str == "EXIT")
			check = false;
	}
	return 0;
}
