/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/16 12:01:54 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default") {
	std::cout << "Animal " << this->_type << " has been created with default constructor." << std::endl;
	return ;
}

Animal::Animal(const std::string& type) : _type(type) {
	std::cout << "Animal " << this->_type << " has been created with default constructor." << std::endl;
	return ;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}
