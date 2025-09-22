/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/22 22:17:30 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap john("John");
	ScavTrap doe("Doe");

	john.attack("Doe");
	doe.takeDamage(john.getAttackDamage());
	doe.beRepaired(5);
	doe.attack("John");
	john.takeDamage(doe.getAttackDamage());
	john.beRepaired(3);
	doe.guardGate();
}
