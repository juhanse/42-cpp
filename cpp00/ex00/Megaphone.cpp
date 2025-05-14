/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:10:06 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 17:06:04 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
