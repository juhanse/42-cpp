/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/06 17:42:05 by juhanse          ###   ########.fr       */
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
	std::cout << "Constructor by copy : " << other.getType() << " called" << std::endl;
	*this = other;
}

Animal::~Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
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
