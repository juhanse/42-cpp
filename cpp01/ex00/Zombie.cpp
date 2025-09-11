/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:25:14 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:16:35 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const std::string& name) {
	this->_name = name;
	std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " is destroyed." << std::endl;
}

void Zombie::announce(void) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(const std::string& name) {
	Zombie zombie(name);
	zombie.announce();
}
