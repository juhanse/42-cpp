/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/06 17:54:12 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default") {
	std::cout << "Constructor Animal: " << this->_type << " created" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type) {
	std::cout << "Constructor Animal: " << this->_type << " created" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Constructor by copy Animal: " << other.getType() << " called" << std::endl;
	*this = other;
}

Animal::~Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Copy assignment operator Animal called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::setType(const std::string& type) {
	this->_type = type;
}
