/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 21:38:48 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default") {
	std::cout << "Constructor WrongAnimal: " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
	std::cout << "Constructor WrongAnimal: " << this->_type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
	std::cout << "Constructor by copy WrongAnimal: " << other.getType() << " called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::setType(const std::string& type) {
	this->_type = type;
}
