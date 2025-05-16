/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:24:44 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/16 16:52:58 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

/* 
Fonction					Utilité
std::ifstream				Lire un fichier
std::ofstream				Écrire dans un fichier
std::string::find			Trouver une sous-chaîne
std::string::substr			Extraire un morceau de chaîne
std::string::append / +		Construire la chaîne finale
std::string::length()		Longueur de la chaîne
*/

int main(int ac, const char **av)
{
	if (ac != 4 || av[2][0] == '\0')
		return (std::cerr << "error: bad arguments" << std::endl, 1);
	
	std::string		name = av[1];
	std::string		to_find = av[2];
	std::ifstream	ifs (name.c_str());
	name += ".replace";
	std::ofstream	ofs (name.c_str());
	std::string		line;
	std::string		save;
	size_t			index = 0;

	if (!ifs.is_open())
		return (std::cerr << "error: fail open file" << std::endl, 1);
	while (std::getline(ifs, line))
		save += line + "\n";
	
	while ((index = save.find(to_find, index)) != std::string::npos)
	{
		save.erase(index, to_find.length());
		save.insert(index, av[3]);
	}
	ofs << save;
	return 0;
}