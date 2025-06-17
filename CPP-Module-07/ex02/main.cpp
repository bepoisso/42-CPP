/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:40:45 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/17 14:13:14 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template<typename T>
void printArray(const Array<T>& arr) {
	for (unsigned int i = 0; i < arr.getSize(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main() {
	std::cout << "----------Default constructor----------" << std::endl;
	Array<int> a;
	std::cout << "Size of a: " << a.getSize() << std::endl;

	std::cout << std::endl << "----------Constructor with size 5----------" << std::endl;
	Array<int> b(5);
	printArray(b);

	std::cout << std::endl << "----------Modifying elements----------" << std::endl;
	for (unsigned int i = 0; i < b.getSize(); ++i)
		b[i] = i * 2;
	printArray(b);

	std::cout << std::endl << "----------Const instance test----------" << std::endl;
	const Array<int> c(b);
	printArray(c);

	std::cout << std::endl << "----------Deep copy test----------" << std::endl;
	Array<int> d = b;
	std::cout << "Before modifying b:" << std::endl;
	printArray(d);
	b[0] = 999;
	std::cout << "After modifying b:" << std::endl;
	std::cout << "b: "; printArray(b);
	std::cout << "d: "; printArray(d);

	std::cout << std::endl << "----------Out of bounds exception test----------" << std::endl;
	try {
		std::cout << b[42] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "----------Test with std::string----------" << std::endl;
	Array<std::string> strs(3);
	strs[0] = "Hello";
	strs[1] = "my";
	strs[2] = "friends";
	printArray(strs);

	std::cout << std::endl << "----------Test with char----------" << std::endl;
	Array<char> chars(4);
	chars[0] = 'A';
	chars[1] = 'B';
	chars[2] = 'C';
	chars[3] = 'D';
	printArray(chars);

	return 0;
}
