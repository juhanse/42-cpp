/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:39:01 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:39:13 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 12;
	Zombie* horde = zombieHorde(N, "HordeZombie");

	if (!horde)
		return (1);
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
