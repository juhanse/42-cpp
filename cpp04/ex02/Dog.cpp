/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 16:12:49 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog") {
	brain = new Brain();
	std::cout << "Constructor Dog: " << this->_type << " created" << std::endl;
}

Dog::Dog(const std::string& type) : AAnimal(type) {
	brain = new Brain();
	std::cout << "Constructor Dog: " << this->_type << " created" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Constructor by copy Dog: " << other.getType() << " called" << std::endl;
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Waouffff" << std::endl;	
}

Brain* Dog::getBrain(void) const {
	return this->brain;
}
