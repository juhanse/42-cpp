/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:43:56 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/21 15:28:10 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _gradeSign(1), _gradeExecute(2) {}

Form::Form(const std::string& name, const int gradeSign, const int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {}

Form::Form(const Form& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) {}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
	if (this != &other) {
		this->_isSigned = other._isSigned;
	}
	return *this;
}

std::string Form::getName(void) const {
	return (this->_name);
}

bool Form::getIsSigned(void) const {
	return (this->_isSigned);
}

int Form::getGradeSign(void) const {
	return (this->_gradeSign);
}

int Form::getGradeExecute(void) const {
	return (this->_gradeExecute);
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeSign) {
		this->_isSigned = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooLowException::what(void) const throw() {
	return ("grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw() {
	return ("grade too high");
};

std::ostream& operator<<(std::ostream& os, const Form& form) {
	if (form.getIsSigned() == true) {
		os << "Form " << form.getName() << " - is signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	} else {
		os << "Form " << form.getName() << " - is not signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	}
	return (os);
}
