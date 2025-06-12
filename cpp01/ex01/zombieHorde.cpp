/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:54:33 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/12 13:50:35 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N <= 0)
		return (NULL);

	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}

	return (horde);
}
