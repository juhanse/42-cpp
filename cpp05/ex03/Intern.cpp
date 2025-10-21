/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:40:53 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 00:40:53 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

AForm *Intern::makeForm(const std::string& formName, const std::string& target) {
}
