/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:07:52 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 12:08:17 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class PhoneBook
{
	public :
		Contact	contacts[8];
		bool	isFull;
		int		nb_contacts;
	public :
		void	add(void);
		void	search(void);
};

#endif
