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
	if (this->_data.size() >= this->_N) {
		throw FullContainerException();
	}

	this->_data.push_back(number);
}

int Span::shortestSpan() {
	if (this->_data.size() < 2) {
		throw NotEnoughNumbersException();
	}

	std::vector<int> map = this->_data;
	std::sort(map.begin(), map.end());
	int min = map[1] - map[0];
	for (size_t i = 1; i < map.size(); i++) {
		if (map[i] - map[i - 1] < min) {
			min = map[i] - map[i - 1];
		}
	}
	return (min);
}

int Span::longestSpan() {
	if (this->_data.size() < 2) {
		throw NotEnoughNumbersException();
	}

	std::vector<int> map = this->_data;
	std::sort(map.begin(), map.end());
	return (map.back() - map.front());
}

const char *Span::FullContainerException::what() const throw() {
	return ("The data container is full");
}

const char *Span::NotEnoughNumbersException::what() const throw() {
	return ("Not enough numbers in the data container");
}
