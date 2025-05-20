/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:00:52 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 15:46:48 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <new>

class Weapon {
	private:
		std::string	_type;

	public:
		Weapon(const std::string& name);
		~Weapon();

		void	setType(const std::string& type);
		const std::string&	getType() const;
};

#endif
