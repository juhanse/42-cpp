/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:50:08 by juhanse           #+#    #+#             */
/*   Updated: 2025/03/07 21:17:47 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstring>

void	PhoneBook::add(void)
{
	if (isFull)
		std::cout << "Phonebook is full! Overwriting oldest contact...\n";
	std::string first, last, nickname, Phone, dark;
	std::cout << "Please add a First Name : ";
	std::getline(std::cin, first);
	std::cout << "Please add a Last Name : ";
	std::getline(std::cin, last);
	std::cout << "Please add a Nick Name: ";
	std::getline(std::cin, nickname);
	std::cout << "Please add a Phone NUmber : ";
	std::getline(std::cin, Phone);
	std::cout << "Please add a your Darkest secret : ";
	std::getline(std::cin, dark);
	contacts[current].firstname = first;
	contacts[current].lastname = last;
	contacts[current].nickname = nickname;
	contacts[current].darkest = dark;
	contacts[current].PhoneNumber = Phone;
	current = current + 1 % 8;
	std::cout << "\nSuccessfully added your info!\n";
}
