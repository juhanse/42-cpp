/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:49:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/02 15:05:27 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Harl is created" << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl is destroyed" << std::endl;
}

void	Harl::complain(std::string level) {
	int 	i = 0;
	void	(Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i++ < 4) {
		if (level == levels[i]) {
			(this->*complaints[i])();
			return ;
		}
	}
}
