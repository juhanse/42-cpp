/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:43:56 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:24:44 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AForm.hpp"
#include "includes/Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeSign(1), _gradeExecute(2) {}

AForm::AForm(const std::string& name, const int gradeSign, const int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {}

AForm::AForm(const AForm& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other) {
		this->_isSigned = other._isSigned;
	}
	return *this;
}

std::string AForm::getName(void) const {
	return (this->_name);
}

bool AForm::getIsSigned(void) const {
	return (this->_isSigned);
}

int AForm::getGradeSign(void) const {
	return (this->_gradeSign);
}

int AForm::getGradeExecute(void) const {
	return (this->_gradeExecute);
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeSign) {
		this->_isSigned = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooLowException::what(void) const throw() {
	return ("grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw() {
	return ("grade too high");
};

const char *AForm::FormNotSignedException::what(void) const throw() {
	return ("form not signed");
};

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	if (form.getIsSigned() == true) {
		os << "Form " << form.getName() << " - is signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	} else {
		os << "Form " << form.getName() << " - is not signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	}
	return (os);
}
