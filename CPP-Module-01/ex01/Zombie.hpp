/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:35:50 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/14 10:48:23 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Zombie {
	
	public :

		Zombie(void);
		~Zombie(void);
		void	annoucement(void);
		void	setName(std::string name);

	private :
		std::string _name;
		
};

Zombie *zombieHorde( int N, std::string name );