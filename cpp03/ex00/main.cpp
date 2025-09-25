/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/25 23:09:10 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("R2D2");
	ClapTrap b("C3PO");

	a.attack("C3PO");
	b.takeDamage(3);
	b.beRepaired(2);

	return (0);
}
