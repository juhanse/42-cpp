/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 16:12:35 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	brain = new Brain();
	std::cout << "Constructor Cat: " << this->_type << " created" << std::endl;
}

Cat::Cat(const std::string& type) : AAnimal(type) {
	brain = new Brain();
	std::cout << "Constructor Cat: " << this->_type << " created" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Constructor by copy Cat: " << other.getType() << " called" << std::endl;
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Miaaawww" << std::endl;	
}

Brain* Cat::getBrain(void) const {
	return this->brain;
}
