/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:11:56 by juhanse           #+#    #+#             */
/*   Updated: 2025/03/07 21:14:18 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;

	phonebook.current = 0;
	while (true)
	{
		std::cout << "\nEnter a command : ADD or SEARCH or EXIT \n >";
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT")
			break ;
	}
	return (0);
}
