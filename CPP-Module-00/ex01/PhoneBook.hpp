/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:48:14 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/09 17:05:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		int		current_index;
		int		size;
		Contact	contacts[8];

		void	print_header(void) const;
	
	public:
		void	addContact(void);
		void	displayContact(void);

		PhoneBook(void);
		~PhoneBook(void);
};

#endif
