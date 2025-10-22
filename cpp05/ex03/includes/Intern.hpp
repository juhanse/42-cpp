/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:39:01 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:25:41 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();

		Intern& operator=(const Intern& other);
		AForm *makeForm(const std::string& formName, const std::string& target);
};
