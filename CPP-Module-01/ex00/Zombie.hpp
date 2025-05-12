/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:22:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/12 15:21:07 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {
	
	public :

		Zombie(std::string name);
		~Zombie(void);
		void	annoucement(void);

	private :
		std::string _name;
		
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif