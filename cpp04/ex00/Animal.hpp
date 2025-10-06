/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:51:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/06 16:43:28 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
		virtual ~Animal(void);

		virtual void makeSound(void) const;

		std::string getType(void) const;
		void setType(const std::string& type);
};

#endif
