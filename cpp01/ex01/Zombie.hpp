/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:39:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 13:43:26 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>

class Zombie {
	private:
		std::string	_name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void setName(std::string name);
		void announce() const;
};

Zombie *zombieHorde(int N, std::string name);

#endif
