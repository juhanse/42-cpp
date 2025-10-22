/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:53:21 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/Intern.hpp"
#include "includes/RobotomyRequestForm.hpp"

int	main(void) {
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		Intern michel;
		AForm* rrf;
		rrf = michel.makeForm("presidential pardon", "President");
		delete rrf;
	}
	{
		Intern michel;
		AForm* rrf;
		rrf = michel.makeForm("shrubbery creation", "Shrubbery");
		delete rrf;
	}
	{
		Intern michel;
		AForm* rrf;
		rrf = michel.makeForm("invalid", "???");
		delete rrf;
	}
	return (0);
}
