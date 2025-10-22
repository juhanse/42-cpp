/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:40:53 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:49:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Intern.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

AForm *Intern::createPresidentialPardonForm(const std::string& target) const {
	return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string& target) const {
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(const std::string& target) const {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string& formName, const std::string& target) {
    std::string formTypes[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*forms[3])(const std::string&) const = {
        &Intern::createPresidentialPardonForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createShrubberyCreationForm,
    };

	int i = -1;
    while (++i < 3) {
        if (formName == formTypes[i]) {
            AForm* form = (this->*forms[i])(target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }
    }

    std::cout << "Form: " << formName << " invalid." << std::endl;
    return (NULL);
}
