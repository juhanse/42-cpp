/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:01:19 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 15:52:10 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {
	std::cout << "HumainB " << _name << " is destroyed." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() const {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << "aucune arme" << std::endl;
}
