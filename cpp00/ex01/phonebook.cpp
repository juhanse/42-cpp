/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:50:08 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 12:11:28 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add(void)
{
	int	current;

	if (isFull)
		std::cout << "Phonebook is full! Overwriting oldest contact...\n";
	std::string first, last, nickname, dark, number;
	std::cout << "Please add a First Name : ";
	std::getline(std::cin, first);
	std::cout << "Please add a Last Name : ";
	std::getline(std::cin, last);
	std::cout << "Please add a Nick Name: ";
	std::getline(std::cin, nickname);
	std::cout << "Please add a Phone NUmber : ";
	std::getline(std::cin, number);
	std::cout << "Please add a your Darkest secret : ";
	std::getline(std::cin, dark);
	current = nb_contacts + 1 % 8;
	contacts[current].add(first, last, nickname, dark, number);
	nb_contacts++;
	std::cout << "\nSuccessfully added your info!\n";
}

void	PhoneBook::search(void)
{
	int	index;

	contacts->displayAll();
	std::cout << "Enter the index of the contact you want to view: ";
	std::getline(std::cin, index);
	if (index < 0 || index > nb_contacts)
		std::cout << "Invalid index";
	Contact contact = contacts[index];
	contact.display(contact);
}
