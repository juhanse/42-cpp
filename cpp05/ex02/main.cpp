/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 16:02:40 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int	main(void) {
	{
		Bureaucrat michel("Michel", 2);
		PresidentialPardonForm form("Michel");
	
		std::cout << michel << std::endl;
		std::cout << form << std::endl;

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.signForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "END" << std::endl;
	}
	{
		Bureaucrat michel("Michel", 2);
		RobotomyRequestForm form("Michel");
	
		std::cout << michel << std::endl;
		std::cout << form << std::endl;

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.signForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "END" << std::endl;
	}
	{
		Bureaucrat michel("Michel", 2);
		ShrubberyCreationForm form("Michel");
	
		std::cout << michel << std::endl;
		std::cout << form << std::endl;

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.signForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			michel.executeForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "END" << std::endl;
	}

	return (0);
}
