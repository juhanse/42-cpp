/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:51:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/07 21:58:42 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* brain;

	public:
		Cat(void);
		Cat(const std::string& type);
		Cat(const Cat& other);
		~Cat(void);

		Cat& operator=(const Cat& other);

		void makeSound(void) const;
};

#endif
