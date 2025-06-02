/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:01:24 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/02 14:56:55 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"
# include <iostream>
# include <string>
# include <new>

class HumanB {
	private:
		const std::string	_name;
		Weapon*	_weapon;

	public:
		HumanB(const std::string& name);
		~HumanB();

		void	setWeapon(Weapon& weapon);
		void	attack() const;
};

#endif
