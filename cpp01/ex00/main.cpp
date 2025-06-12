/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:25:16 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/12 13:50:21 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *zombie;

	zombie = newZombie("Heap zombie");
	zombie->announce();
	randomChump("Stack zombie");
	delete zombie;
	return (0);
}
