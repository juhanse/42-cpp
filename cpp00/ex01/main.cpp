/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:11:56 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 13:38:56 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av)
{
	std::string	input;
	PhoneBook	phonebook;

	(void)av;
	if (ac != 1)
		return (0);
	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter command [ADD  | SEARCH | EXIT]: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
