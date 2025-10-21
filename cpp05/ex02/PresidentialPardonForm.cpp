/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:21:26 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 00:21:26 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other) {
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

const std::string& PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		throw AForm::GradeTooLowException();
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& presidential) {
	os << "Presidential Pardon Form - target: " << presidential.getTarget();
	return os;
}
