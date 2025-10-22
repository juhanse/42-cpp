/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:25:22 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:21:05 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RobotomyRequestForm.hpp"
#include "includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	(void)other;
	return *this;
}

const std::string& RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		throw AForm::GradeTooLowException();
	}

	if (rand() % 2) {
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	} else {
		std::cout << "The robotomy on " << this->_target << " has failed." << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& robotomy) {
	os << "Robotomy Request Form - target: " << robotomy.getTarget();
	return os;
}
