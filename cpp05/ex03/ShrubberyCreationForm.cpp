/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:29:55 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:20:31 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ShrubberyCreationForm.hpp"
#include "includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	(void)other;
	return *this;
}

const std::string& ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (!this->getIsSigned()) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		throw AForm::GradeTooLowException();
	}

	std::ofstream outfile((this->_target + "_shrubbery").c_str());
	if (!outfile) {
		std::cerr << "Error: Could not create file " << this->_target + "_shrubbery" << std::endl;
		return;
	}
	outfile << "       _-_" << std::endl;
	outfile << "    /~~   ~~\\" << std::endl;
	outfile << " /~~         ~~\\" << std::endl;
	outfile << "{               }" << std::endl;
	outfile << " \\  _-     -_  /" << std::endl;
	outfile << "   ~  \\\\ //  ~" << std::endl;
	outfile << "_- -   | | _- _" << std::endl;
	outfile << "  _ -  | |   -_" << std::endl;
	outfile << "      // \\\\" << std::endl;
	outfile.close();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& shrubbery) {
	os << "Shrubbery Creation Form - target: " << shrubbery.getTarget();
	return os;
}
