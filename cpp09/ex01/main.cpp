/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:07:54 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/17 01:27:47 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}

	RPN rpn;
	try {
		rpn.calculate(av[1]);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return (1);
	}

	std::cout << rpn.result() << std::endl;
	return (0);
}
