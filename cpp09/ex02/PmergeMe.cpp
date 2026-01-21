/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:37:45 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 14:31:29 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) : _size(copy._size), _initial(copy._initial), _vector(copy._vector), _deque(copy._deque), _vTime(copy._vTime), _dTime(copy._dTime) {}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	this->_initial = other._initial;
	this->_vector = other._vector;
	this->_deque = other._deque;
	this->_vTime = other._vTime;
	this->_dTime = other._dTime;
	return (*this);
}

void PmergeMe::initialize(int ac, char **av) {
	if (ac < 2) {
		throw std::invalid_argument("Error: Not enough arguments.");
	}

	for (int i = 1; i < ac; ++i) {
		char *endptr;
		long val = std::strtol(av[i], &endptr, 10);

		if (*endptr != '\0') {
			throw std::invalid_argument("Error: Invalid character detected.");
		}
		if (val < 0) {
			throw std::invalid_argument("Error: Negative numbers not allowed.");
		}
		if (val > INT_MAX) {
			throw std::out_of_range("Error: Number exceeds INT_MAX.");
		}

		int finalNum = static_cast<int>(val);
		_initial.push_back(finalNum);
		_vector.push_back(finalNum);
		_deque.push_back(finalNum);
	}

	_size = _vector.size();
}

void PmergeMe::sort() {
	clock_t start = clock();
	//fordJohnson(_vector);
	_vTime = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000000;

	start = clock();
	//fordJohnson(_deque);
	_dTime = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000000;
}

void PmergeMe::display() const {
	std::cout << "Before: ";
	printContainer(_initial);
	std::cout << std::endl;

	std::cout << "After: ";
	printContainer(_vector);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::vector : " << _vTime << " us";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::deque : " << _dTime << " us";
}
