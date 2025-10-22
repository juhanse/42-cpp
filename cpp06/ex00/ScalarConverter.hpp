/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 21:46:16 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ScalarConverter {
	private:
		static char _char;
		static int _int;
		static float _float;
		static double _double;

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter& other);

		static void	convert(const std::string& str);
};
