/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:15:55 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/22 12:02:20 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _lst(other._lst) {
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		_lst = other._lst;
	}
	return *this;
}

/* Operator */

/* Getter / Setter */

/* Methode */
void BitcoinExchange::addLine(std::string & line) {
	try {
		isAvaliableLine(line);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
}

void BitcoinExchange::isAvaliableLine(std::string & str) {
	if (str.empty())
		return ;
	std::string date = str.substr(0, 10);
	std::string temp = str.substr(11, str.length() - 11);
	
	try {
		isDate(date);
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	for (size_t i = 0; i < temp.length(); i++) {
		if (!isdigit(temp[i]) && temp[i] != '.')
			throw std::invalid_argument("bad input => " + str);
	}
	
	double		nbr = std::atof(temp.c_str());
	_lst[date] = nbr;
}

void BitcoinExchange::isDate(std::string & str) {
	if (str.length() != 10 || str[4] != '-' || str[7] != '-')
		throw std::invalid_argument("bad input => " + str);
	
	std::string year = str.substr(0, 4);
	std::string month = str.substr(5, 2);
	std::string day = str.substr(8, 2);

	for (size_t i = 0; i < 4; i++)
		if (!std::isdigit(year[i]))
			throw std::invalid_argument("bad input => " + str);
		
	for (size_t i = 0; i < 2; i++)
		if (!isdigit(month[i]) || !isdigit(day[i]))
			throw std::invalid_argument("bad input => " + str);
	
	int	nYear = atoi(year.c_str());
	int	nMonth = atoi(month.c_str());
	int	nDay = atoi(day.c_str());

	const int daysInMonth[12] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};

	if (nYear < 2000 || nYear > 2025)
		throw std::out_of_range("bad input => " + str);
	if (nMonth < 1 || nMonth > 12)
		throw std::out_of_range("bad input => " + str);
	if (nMonth == 2 && ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)) {
		if (nDay < 1 || nDay > 29)
			throw std::invalid_argument("bad input (day of bisextile year) => " + str);
	}
	else if (nDay < 1 || nDay > daysInMonth[nMonth - 1])
		throw std::invalid_argument("bad input => " + str);

}

void BitcoinExchange::search(std::string & date, double value) {
	std::map<std::string, double>::iterator it = _lst.find(date);
	if (it == _lst.end())
		it = _lst.lower_bound(date);
	std::cout << it->first << " => " << value << " = " << (it->second * value) << std::endl;
}

std::ostream &operator<<(std::ostream &os, const BitcoinExchange &obj) {
	std::map<std::string, double>::const_iterator it = obj._lst.begin();
	while (it != obj._lst.end()) {
		os << it->first << " => " << std::fixed << std::setprecision(2) << it->second << std::endl;
		++it;
	}
	return os;
}
