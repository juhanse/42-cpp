/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:50:08 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 14:27:49 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : size(0), oldestIndex(0) {};

void	PhoneBook::add(void) {
	std::string first, last, nick, dark, number;

	do {
		std::cout << "Firstname: ";
		std::getline(std::cin, first);
		if (first.empty())
			std::cout << "Firstname cannot be empty" << std::endl;
	} while (first.empty());

	do {
		std::cout << "Lastname: ";
		std::getline(std::cin, last);
		if (last.empty())
			std::cout << "Lastname cannot be empty" << std::endl;
	} while (last.empty());

	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, nick);
		if (nick.empty())
			std::cout << "Nickname cannot be empty" << std::endl;
	} while (nick.empty());

	do {
		std::cout << "Phone number: ";
		std::getline(std::cin, number);
		if (number.empty())
			std::cout << "Phone number cannot be empty" << std::endl;
	} while (number.empty());

	do {
		std::cout << "Darkest secret: ";
		std::getline(std::cin, dark);
		if (dark.empty())
			std::cout << "Darkest secret be empty" << std::endl;
	} while (dark.empty());

	contacts[oldestIndex].setContact(first, last, nick, dark, number);
	oldestIndex = (oldestIndex + 1) % 8;
	if (size < 8)
		size++;
}

void	PhoneBook::search(void) const {
	std::string input;

	if (size > 0)
	{
		std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "Firstname" << "|"
		<< std::setw(10) << "Lastname" << "|"
		<< std::setw(10) << "Nickname" << "|"
		<< std::setw(10) << "Darkest" << "|"
		<< std::setw(10) << "Number" << std::endl;

		for (int i = 0; i < size; i++) {
			contacts[i].display(i);
		}
	}

	std::cout << "Enter the index of the contact you want to view: ";
	std::getline(std::cin, input);

	if (input.length() != 1 || !isdigit(input[0])) {
		std::cout << "Invalid index" << std::endl;
		return;
	}

	int index = input[0] - '0';
	if (index < 0 || index >= size) {
		std::cout << "Invalid index" << std::endl;
		return;
	}

	Contact contact = contacts[index];
	contacts[index].displayContact(contact);
}
