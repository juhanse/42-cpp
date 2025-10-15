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

Form::Form(const std::string& name, bool isSigned, unsigned int gradeSign, unsigned int gradeExecute) : _name(name), _isSigned(isSigned), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << "Form " << this->_name << " has been created with name constructor." << std::endl;
}

Form::Form(const Form& copy) {
	std::cout << "Copy Form constructor called" << std::endl;
	*this = copy;
}

Form::~Form() {
	std::cout << "Destructor Form called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Copy Form assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_isSigned = other.getIsSigned();
		this->_gradeSign = other.getGradeSign();
		this->_gradeExecute = other.getGradeExecute();
	}
	return *this;
}

std::string Form::getName(void) const {
	return (this->_name);
}

bool Form::getIsSigned(void) const {
	return (this->_isSigned);
}

unsigned int Form::getGradeSign(void) const {
	return (this->_gradeSign);
}

unsigned int Form::getGradeExecute(void) const {
	return (this->_gradeExecute);
}

void Form::setName(const std::string& name) {
	this->_name = name;
}

void Form::setGradeSign(unsigned int grade) {
	this->_gradeSign = grade;
}

void Form::setGradeExecute(unsigned int grade) {
	this->_gradeExecute = grade;
}

// void Form::beSigned(const Bureaucrat& bureaucrat) {
// 	// TODO
// }

std::ostream& operator<<(std::ostream& os, const Form& form) {
	if (form.getIsSigned() == true) {
		os << "Form " << form.getName() << " - is signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	} else {
		os << "Form " << form.getName() << " - is not signed - grade sign: " << form.getGradeSign() << " - grade execute: " << form.getGradeExecute();
	}
	return (os);
}
