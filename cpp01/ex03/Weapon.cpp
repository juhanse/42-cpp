/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:00:54 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 15:46:38 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon() {
	std::cout << "Weapon " << _type << " is destroyed." << std::endl;
}

void Weapon::setType(const std::string& type) {
	_type = type;
}

const std::string&	Weapon::getType() const {
	return _type;
}
