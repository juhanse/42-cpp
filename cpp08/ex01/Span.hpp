/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:12:26 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 16:44:03 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Span {
	private:
		unsigned int	_N;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
};
