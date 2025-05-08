/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:48:17 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/08 17:01:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
	public :
		int		index;
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone;
		char	*secret;

		Contact(void);
		~Contact(void);
};

#endif
