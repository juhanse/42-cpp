/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:12:26 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 14:35:17 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int>	_data;
		unsigned int		_N;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();

		class FullContainerException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NotEnoughNumbersException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};
