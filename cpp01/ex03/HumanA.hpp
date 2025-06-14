/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:01:10 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/02 14:56:22 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>
# include <new>

class HumanA {
	private:
		const std::string	_name;
		Weapon&	_weapon;

	public:
		HumanA(const std::string &name, Weapon& weapon);
		~HumanA();

		void	attack() const;
};

#endif
