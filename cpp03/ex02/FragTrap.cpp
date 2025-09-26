/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:03:46 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/26 19:38:47 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap has been created with default constructor." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap " << this->name << " has been created with name constructor." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for " << other.name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << this->name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name << " requests a high five." << std::endl;
}
