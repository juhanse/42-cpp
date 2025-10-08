/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:51:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 13:59:51 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain* brain;

	public:
		Dog(void);
		Dog(const std::string& type);
		Dog(const Dog& other);
		~Dog(void);

		Dog& operator=(const Dog& other);

		void makeSound(void) const;
};

#endif
