/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 21:44:36 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "Constructor WrongCat: " << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type) {
	std::cout << "Constructor WrongCat: " << this->_type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "Constructor by copy WrongCat: " << other.getType() << " called" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Wrong Miaaawww" << std::endl;	
}
