/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 15:21:14 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Constructor Cat: " << this->_type << " created" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type) {
	std::cout << "Constructor Cat: " << this->_type << " created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Constructor by copy Cat: " << other.getType() << " called" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Destructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Miaaawww" << std::endl;	
}
