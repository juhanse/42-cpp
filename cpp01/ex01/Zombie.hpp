/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:39:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:36:33 by juhanse          ###   ########.fr       */
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
		Zombie(const std::string& name);
		~Zombie();

		void setName(const std::string& name);
		void announce(void) const;
};

Zombie *zombieHorde(int N, const std::string& name);

#endif
