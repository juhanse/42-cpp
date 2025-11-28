/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/28 17:53:16 by juhanse          ###   ########.fr       */
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
	std::size_t	pos = 0;
	double		value = std::strtod(str.c_str(), NULL);

	if (str.empty() || (value == 0.0 && str[pos] != '0' && str[pos] != '-' && str[pos] != '+')) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}

	// Char conversion
	if (value < 0 || value > 127 || isnan(value)) {
		std::cout << "char: impossible" << std::endl;
	} else if (!isprint(static_cast<char>(value))) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}

	// Int conversion
	if (value < static_cast<double>(INT32_MIN) || value > static_cast<double>(INT32_MAX) || isnan(value)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}

	// Float conversion
	std::cout << "float: " << static_cast<float>(value);
	if (static_cast<float>(value) - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	// Double conversion
	std::cout << "double: " << value;
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
