/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:10:13 by bepoisso          #+#    #+#             */
/*   Updated: 2025/05/28 16:38:45 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* duck = new Animal("Duck");

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	const WrongAnimal* Wduck = new WrongAnimal("Duck");
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << duck->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	duck->makeSound();

	std::cout << Wi->getType() << " " << std::endl;
	std::cout << Wmeta->getType() << " " << std::endl;
	std::cout << Wduck->getType() << " " << std::endl;

	Wi->makeSound();
	Wmeta->makeSound();
	Wduck->makeSound();

	delete i;
	delete j;
	delete meta;
	delete duck;

	delete Wi;
	delete Wmeta;
	delete Wduck;

	return 0;
}
