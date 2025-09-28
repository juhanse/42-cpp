/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/28 23:52:48 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "ClapTrap " << this->_name << " has been created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "ClapTrap " << this->_name << " has been created with name constructor." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called for " << other._name << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "ClapTrap " << this->getName() << " can't attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "ClapTrap " << this->getName() << " can't be repaired." << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " is repaired by " << amount << " points." << std::endl;
}

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

void ClapTrap::setName(const std::string& name) {
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->_attackDamage = attackDamage;
}
