/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:40:43 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:35:40 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string& name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string& name) {
	_name = name;
}

void Zombie::announce(void) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
