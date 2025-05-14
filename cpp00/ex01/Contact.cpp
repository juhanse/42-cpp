/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:58:43 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 14:26:25 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {};

void	Contact::setContact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& darkest, const std::string& number) {
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->darkest = darkest;
	this->number = number;
}

std::string Contact::truncate(const std::string& str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::display(int index) const {
	std::cout << std::setw(10) << index << "|" 
	<< std::setw(10) << truncate(firstname) << "|"
	<< std::setw(10) << truncate(lastname) << "|"
	<< std::setw(10) << truncate(nickname) << "|"
	<< std::setw(10) << truncate(darkest) << "|"
	<< std::setw(10) << truncate(number) << std::endl;
}

void	Contact::displayContact(Contact contact) const {
	std::cout << "Firstname: " << contact.firstname << std::endl;
	std::cout << "Lastname: " << contact.lastname << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Darkest: " << contact.darkest << std::endl;
	std::cout << "Phone number: " << contact.number << std::endl;
}
