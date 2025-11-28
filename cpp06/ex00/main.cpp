/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/28 17:55:16 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(void) {
	{
		std::cout << "----- TEST 1 -----" << std::endl;
		std::cout << "c" << std::endl;
		ScalarConverter::convert("c");
	}
	{
		std::cout << "----- TEST 2 -----" << std::endl;
		std::cout << "42" << std::endl;
		ScalarConverter::convert("42");
	}
	{
		std::cout << "----- TEST 3 -----" << std::endl;
		std::cout << "42.0f" << std::endl;
		ScalarConverter::convert("42.0f");
	}
	{
		std::cout << "----- TEST 4 -----" << std::endl;
		std::cout << "42.0" << std::endl;
		ScalarConverter::convert("42.0");
	}
	return (0);
}
