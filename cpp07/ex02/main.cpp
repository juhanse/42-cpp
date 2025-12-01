/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:07:54 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 16:23:12 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	try {
		Array<int> a(5);
		a[0] = 10;
		a[1] = 20;
		a[2] = 30;
		a[3] = 40;
		a[4] = 50;

		Array<int> b = a;
		b[0] = 999;

		std::cout << "a: ";
		for (size_t i = 0; i < a.size(); i++) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "b: ";
		for (size_t i = 0; i < b.size(); i++) {
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;

		Array<std::string> s(3);
		s[0] = "Hello";
		s[1] = "42";
		s[2] = "World";

		for (size_t i = 0; i < s.size(); i++) {
			std::cout << s[i] << std::endl;
		}

		std::cout << "TEST: " << a[5] << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
