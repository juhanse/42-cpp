/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:01:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 15:54:03 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {
	std::cout << "HumainA " << _name << " is destroyed." << std::endl;
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
