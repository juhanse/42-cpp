/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/25 23:15:48 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << this->name << " has been created with default constructor." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << this->name << " has been created with name constructor." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called for " << other.name << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for " << this->name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->name = other.getName();
		this->hitPoints = other.getHitPoints();
		this->energyPoints = other.getEnergyPoints();
		this->attackDamage = other.getAttackDamage();
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "ClapTrap " << this->getName() << " can't attack." << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints < amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEnergyPoints() == 0 || this->getHitPoints() == 0) {
		std::cout << "ClapTrap " << this->getName() << " can't be repaired." << std::endl;
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->getName() << " is repaired by " << amount << " points." << std::endl;
}

std::string ClapTrap::getName(void) const {
	return (this->name);
}

unsigned int ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const {
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const {
	return (this->attackDamage);
}

void ClapTrap::setName(const std::string& name) {
	this->name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->attackDamage = attackDamage;
}
