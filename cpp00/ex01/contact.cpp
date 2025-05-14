/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:58:43 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 11:28:55 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

void	Contact::setContact(std::string firstname, std::string lastname, std::string nickname, std::string darkest, std::string number) {
	firstname = firstname;
	lastname = lastname;
	nickname = nickname;
	darkest = darkest;
	number = number;
}

void	Contact::display(int index) const {
	
}
