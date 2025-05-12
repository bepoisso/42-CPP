/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:48:14 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/12 13:15:17 by bepoisso         ###   ########.fr       */
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
