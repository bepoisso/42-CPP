/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:36:32 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/09 18:17:04 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// Private
void	Account::_displayTimestamp(void) {
	std::time_t now = std::time(NULL);
	std::tm *ltm = std::localtime(&now);
	std::cout << "[";
	std::cout << std::setfill('0')
			  << (1900 + ltm->tm_year)
			  << std::setw(2) << (ltm->tm_mon + 1)
			  << std::setw(2) << ltm->tm_mday
			  << "_"
			  << std::setw(2) << ltm->tm_hour
			  << std::setw(2) << ltm->tm_min
			  << std::setw(2) << ltm->tm_sec
			  << "]"
			  << std::endl;
	return ;
}

// Public

int		Account::getNbAccounts( void ){

	return 0;
}

int		Account::getTotalAmount( void ){

	return 0;
}

int		Account::getNbDeposits( void ){

	return 0;
}

int		Account::getNbWithdrawals( void ){

	return 0;
}

void	Account::displayAccountsInfos( void ){

	return ;
}


void	Account::makeDeposit( int deposit ) {
	
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	
	return 0;
}

int		Account::checkAmount( void ) const {
	
	return 0;
}

void	Account::displayStatus( void ) const {
	
	
	return ;
}


Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_displayTimestamp();
	this->displayStatus(); // pas sur
	return;
}

Account::~Account( void ) {
	return;
}
