/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/06 16:35:40 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Constructor Animal created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}
