/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:51:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 21:37:35 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal(void);

		WrongAnimal& operator=(const WrongAnimal& other);

		virtual void makeSound(void) const;

		std::string getType(void) const;
		void setType(const std::string& type);
};

#endif
