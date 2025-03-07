/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:07:52 by juhanse           #+#    #+#             */
/*   Updated: 2025/03/07 21:17:33 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class contact
{
	public :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest;
		std::string	PhoneNumber;
};

class PhoneBook
{
	public :
		contact	contacts[8];
		int		current;
		bool	isFull;
	public :
		void	add(void);
		void	search(void);
};

#endif
