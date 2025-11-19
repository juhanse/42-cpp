/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/30 23:48:54 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	(void)copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

void	ScalarConverter::convert(const std::string& str) {
	double value = 0.0;
	bool isChar = false;
	
	// Détection char
	if (str.length() == 1 && !isdigit(str[0])) {
		value = static_cast<double>(str[0]);
		isChar = true;
	} else {
		try {
			size_t pos;
			value = std::stod(str, &pos); // convertit en double
			if (pos != str.length() && str.back() != 'f')
				throw std::invalid_argument("invalid input");
		} catch (...) {
			std::cout << "Error: invalid str" << std::endl;
			return;
		}
	}

	// Char
	std::cout << "char: ";
	if (isnan(value) || value < 0 || value > 127)
		std::cout << "impossible";
	else if (!isprint(static_cast<char>(value)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(value) << "'";
	std::cout << std::endl;

	// Int
	std::cout << "int: ";
	if (isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;

	// Float
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

	// Double
	std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}
