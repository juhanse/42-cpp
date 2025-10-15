/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/26 19:21:43 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat min("Min", 150);
	Bureaucrat max("Max", 1);

	std::cout << min << std::endl;
	std::cout << max << std::endl;

	try {
		min.demote();
	} catch (const std::exception &e) {
		std::cout << min.getName() << " catch " << e.what() << std::endl;
	}

	try {
		max.demote();
	} catch (const std::exception &e) {
		std::cout << max.getName() << " catch " << e.what() << std::endl;
	}

	try {
		min.promote();
	} catch (const std::exception &e) {
		std::cout << min.getName() << " catch " << e.what() << std::endl;
	}

	try {
		max.promote();
		max.promote();
	} catch (const std::exception &e) {
		std::cout << max.getName() << " catch " << e.what() << std::endl;
	}

	std::cout << min << std::endl;
	std::cout << max << std::endl;

	return (0);
}
