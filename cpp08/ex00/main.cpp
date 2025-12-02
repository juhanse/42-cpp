/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:07:54 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 14:59:23 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::vector<int> vec;

	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);

	try {
		std::cout << "Found: " << easyfind(vec, 6) << std::endl;
		std::cout << "Found: " << easyfind(vec, 10) << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
