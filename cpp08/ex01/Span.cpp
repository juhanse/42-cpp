/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:13:54 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 16:45:10 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {};

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& copy) {
	*this = copy;
}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->_data = other._data;
		this->_N = other._N;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int number) {
	(void)number;
}

int Span::shortestSpan() {
	return (0);
}

int Span::longestSpan() {
	return (0);
}
