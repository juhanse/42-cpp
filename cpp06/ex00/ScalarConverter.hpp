/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 15:03:17 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <stdint.h>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter& other);

	public:
		static void	convert(const std::string& str);
};
