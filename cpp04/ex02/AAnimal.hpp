/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:51:04 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/08 13:58:53 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal(void);

		AAnimal& operator=(const AAnimal& other);

		virtual void makeSound(void) const = 0;

		std::string getType(void) const;
		void setType(const std::string& type);
};

#endif
