/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:58:43 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 12:10:42 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact(std::string firstname, std::string lastname, std::string nickname, std::string darkest, std::string number) {
	firstname = firstname;
	lastname = lastname;
	nickname = nickname;
	darkest = darkest;
	number = number;
}

void	Contact::display(Contact contact) const {
	std::cout << "Firstname: " << contact.firstname << std::endl;
	std::cout << "Lastname: " << contact.lastname << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone Number: " << contact.number << std::endl;
	std::cout << "Darkest Secret: " << contact.darkest << std::endl;
}

void	Contact::displayAll() const {
	std::cout << "DISPLAY ALL\n";
}
