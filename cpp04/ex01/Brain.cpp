/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:55:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 15:48:20 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "Idea";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

std::string Brain::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		return "Index out of bounds";
	}
	return this->_ideas[index];
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index < 0 || index >= 100) {
		std::cout << "Index out of bounds" << std::endl;
		return;
	}
	this->_ideas[index] = idea;
}
