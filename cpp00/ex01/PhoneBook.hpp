/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:07:52 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/14 14:27:44 by juhanse          ###   ########.fr       */
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
		int		size;
		int		oldestIndex;
	public :
		PhoneBook();

		void	add(void);
		void	search(void) const;
};

#endif
