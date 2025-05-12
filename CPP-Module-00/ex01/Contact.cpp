/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:48:19 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/12 13:22:19 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

Contact::Contact(void) {
	
	return;
}

Contact::~Contact(void) {
	
	return;
}

std::string	Contact::formatField(std::string field) const {
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	while (field.length() < 10)
		field = " " + field;
	return field;
}

void Contact::setInfos(int index) {
	this->index = index;
	std::cout << std::endl;
label_first:
	std::cout << "\tFirst name: ";
	std::getline(std::cin, this->first_name);
    if (std::cin.eof())
		std::cerr << std::endl << "error: ctrl+D detected" << std::endl, exit(1);
	if (!std::cin || this->first_name == "")
		goto label_first;
label_last:
	std::cout << "\tLast name: ";
	std::getline(std::cin, this->last_name);
    if (std::cin.eof())
		std::cerr << std::endl << "error: ctrl+D detected" << std::endl, exit(1);
	if (!std::cin || this->last_name == "")
		goto label_last;
label_nick:
	std::cout << "\tNickname: ";
	std::getline(std::cin, this->nickname);
    if (std::cin.eof())
		std::cerr << std::endl << "error: ctrl+D detected" << std::endl, exit(1);
	if (!std::cin || this->nickname == "")
		goto label_nick;
label_phone:
	std::cout << "\tPhone number: ";
	std::getline(std::cin, this->phone);
    if (std::cin.eof())
		std::cerr << std::endl << "error: ctrl+D detected" << std::endl, exit(1);
	if (!std::cin || this->phone == "")
		goto label_phone;
label_secret:
	std::cout << "\tDarkest secret: ";
	std::getline(std::cin, this->secret);
    if (std::cin.eof())
		std::cerr << std::endl << "error: ctrl+D detected" << std::endl, exit(1);
	if (!std::cin || this->secret == "")
		goto label_secret;
	std::cout << std::endl << "**Contact has been add**" << std::endl;
	return ;
}

void Contact::displayShort(void) const {
	std::string index_s;
	index_s = (this->index + 1) + '0';
	std::cout << "|" << this->formatField(index_s)
		<< "|" << this->formatField(this->first_name)
		<< "|" << this->formatField(this->last_name)
		<< "|" << this->formatField(this->nickname) << "|" << std::endl;
	return;
}

void Contact::displayFull(void) const {
	std::cout << std::endl << "**Contact Form**" << std::endl;
	std::cout <<"\tfirst_name: " << this->first_name << std::endl;
	std::cout << "\tlast_name: " << this->last_name << std::endl;
	std::cout << "\tnickname: " << this->nickname << std::endl;
	std::cout << "\tphone: " << this->phone << std::endl;
	std::cout << "\tsecret: " << this->secret << std::endl;
	return;
}

