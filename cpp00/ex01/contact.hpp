/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:56:59 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 14:26:13 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest;
		std::string	number;

		static std::string truncate(const std::string& str);

	public:
		Contact();

		void setContact(const std::string& firstname, const std::string& lastname, const std::string& nickname, const std::string& darkest, const std::string& number);
		void display(int index) const;
		void displayContact(Contact contact) const;
};

#endif
