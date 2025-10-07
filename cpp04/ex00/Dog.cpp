/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 18:17:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Constructor Dog: " << this->_type << " created" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type) {
	std::cout << "Constructor Dog: " << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	*this = other;
	std::cout << "Constructor by copy Dog: " << other.getType() << " called" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Destructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Waouffff" << std::endl;	
}
