/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 14:07:59 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Default") {
	std::cout << "Constructor AAnimal: " << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(const std::string& type) : _type(type) {
	std::cout << "Constructor AAnimal: " << this->_type << " created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type) {
	std::cout << "Constructor by copy AAnimal: " << other.getType() << " called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructor AniAAnimalmal called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "Copy assignment operator AAnimal called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

std::string AAnimal::getType(void) const {
	return (this->_type);
}

void AAnimal::setType(const std::string& type) {
	this->_type = type;
}
