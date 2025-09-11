/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:25:25 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:16:15 by juhanse          ###   ########.fr       */
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

		void announce(void) const;
};

Zombie	*newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
