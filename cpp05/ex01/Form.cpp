/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:43:56 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/15 18:29:09 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _gradeSign(1), _gradeExecute(2) {
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string& name, const int gradeSign, const int gradeExecute) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << "Form " << this->_name << " has been created with name constructor." << std::endl;
}

Form::Form(const Form& copy) : _name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute) {
	std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Destructor Form called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Copy Form assignment operator called" << std::endl;
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
