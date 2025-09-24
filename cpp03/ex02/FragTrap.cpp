/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:03:46 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/24 15:03:51 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ClapTrap.h"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "<FragTrap " << this->name << "> Status: Created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "<FragTrap copy-constructor has been called!> Status: Cloned" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five! ✋" << std::endl;
}
