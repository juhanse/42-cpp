/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/26 17:41:00 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(10) {
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat " << this->_name << " has been created with name constructor." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_grade = other.getGrade();
	}
	return *this;
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

unsigned int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void Bureaucrat::setName(const std::string& name) {
	this->_name = name;
}

void Bureaucrat::setGrade(unsigned int grade) {
	this->_grade = grade;
}

void Bureaucrat::promote(void) {
	this->_grade--;
}

void Bureaucrat::demote(void) {
	this->_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (os);
}
