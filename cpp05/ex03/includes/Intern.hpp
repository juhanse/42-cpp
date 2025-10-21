/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:39:01 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 00:39:01 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();

		Intern& operator=(const Intern& other);
		AForm *makeForm(const std::string& formName, const std::string& target);
};

#endif
