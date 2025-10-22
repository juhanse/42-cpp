/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 16:04:56 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	{
		Bureaucrat michel("Michel", 2);
		Form form("Constitution", 1, 2);
	
		std::cout << michel << std::endl;
		std::cout << form << std::endl;

		std::cout << "END" << std::endl;
	}
	{
		Bureaucrat michel("Michel", 2);
		Form form("Constitution", 1, 2);
	
		std::cout << michel << std::endl;
		std::cout << form << std::endl;

		try {
			michel.signForm(form);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			form.beSigned(michel);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "END" << std::endl;
	}

	return (0);
}
