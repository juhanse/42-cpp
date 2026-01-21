/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:37:45 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 11:42:43 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& copy) : _vector(copy._vector), _deque(copy._deque), _vectorTime(copy._vectorTime), _dequeTime(copy._dequeTime) {}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	this->_vector = other._vector;
	this->_deque = other._deque;
	this->_vectorTime = other._vectorTime;
	this->_dequeTime = other._dequeTime;
	return (*this);
}

void PmergeMe::merge_insert(int ac, char **av) {
	// Implementation of merge-insert sort algorithm
}
