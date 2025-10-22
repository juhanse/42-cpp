/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:39:01 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:48:48 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# include "AForm.hpp"

class Intern {
	private:
		AForm* createPresidentialPardonForm(const std::string& target) const;
		AForm* createRobotomyRequestForm(const std::string& target) const;
		AForm* createShrubberyCreationForm(const std::string& target) const;

	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();

		Intern& operator=(const Intern& other);
		AForm *makeForm(const std::string& formName, const std::string& target);
};
