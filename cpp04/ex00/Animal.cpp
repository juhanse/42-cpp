/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:50:49 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/16 13:47:40 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal constructor has been created." << std::endl;
	return ;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType(void) const {
	return _type;
}
