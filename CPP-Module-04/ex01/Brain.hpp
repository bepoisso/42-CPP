/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:09:28 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 16:52:16 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
protected:
	std::string _ideas[100];

public:
	/* Canonical start */
	Brain(void); // Default Constructor
	Brain(const Brain & src);
	virtual ~Brain(void);
	Brain & operator=(const Brain & rhs);
	/* Canonical end */

	/* Getter / Setter */
	std::string	getIdeas(int index) const;
	void		setIdeas(std::string newIdea, int index);
};
