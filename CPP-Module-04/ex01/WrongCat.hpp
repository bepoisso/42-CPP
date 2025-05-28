/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:21:50 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 16:34:50 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */

public:
	/* Canonical start */
	WrongCat(void); // Default Constructor
	WrongCat(const WrongCat & src);
	~WrongCat(void);
	WrongCat & operator=(const WrongCat & rhs);
	/* Canonical end */

};

std::ostream & operator<<(std::ostream & out, WrongCat const & value);
