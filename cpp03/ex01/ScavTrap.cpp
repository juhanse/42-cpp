/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:02:09 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/22 22:12:50 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor has been called!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ScavTrap assignment operator has been called!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints == 0 || this->hitPoints == 0) {
		std::cout << "ScavTrap " << this->name << " can't attack!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target
			  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
