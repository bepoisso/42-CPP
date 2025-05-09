/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:48:09 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/09 16:58:18 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>
#include <cstdlib>

PhoneBook::PhoneBook(void) {
	this->current_index = 0;
	this->size = 0;
	this->print_header();
	return;
}

PhoneBook::~PhoneBook(void) {
	
	return;
}

void	PhoneBook::print_header(void) const {
	std::cout << "+----------------------------------------+" << std::endl;
	std::cout << "|                                        |" << std::endl;
	std::cout << "|     WELCOME TO MY AWESOME PHONEBOOK    |" << std::endl;
	std::cout << "|                                        |" << std::endl;
	std::cout << "|                         by bepoisso 🐟 |" << std::endl;
	std::cout << "+----------------------------------------+" << std::endl;
}

void	PhoneBook::addContact(void){
	this->size++;
	if (this->size > 8)
		this->size = 8;
	if (this->current_index > 7)
		this->current_index = 0;
	this->contacts[this->current_index].setInfos(this->current_index);
	this->current_index++;
	return ;
}

void	PhoneBook::displayContact(void) {
	int	i = 0;
	std::string input;
	if (i >= this->size)
	{
		std::cout << "**No entry**" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "|    ID    |First name|Last  name| Nickname |" << std::endl;
	while (i < this->size)
	{
		this->contacts[i].displayShort();
		i++;
	}
label:
	std::cout << "Enter a ID : ";
	std::getline(std::cin, input);
	if (input.length() != 1 || !std::isdigit(input[0]))
	{
		std::cerr << "error: ID" << std::endl;
		goto label ;
	}
	i = input[0] - '0';
	if (i > this->size || i < 1)
	{
		std::cout << "error: ID not in range" << std::endl;
		goto label;
	}
	this->contacts[i - 1].displayFull();
	return ;
}
