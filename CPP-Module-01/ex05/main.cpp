/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:08:07 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/17 18:00:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl h;

	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
	h.complain("random");
	return 0;
}
