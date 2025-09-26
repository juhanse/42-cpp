/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/26 18:01:21 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat bubu("Tic", 149);

	std::cout << bubu << std::endl;
	bubu.promote();
	std::cout << bubu << std::endl;

	std::cout << "GRADE: " << bubu.getGrade() << std::endl;

	bubu.setName("Tac");
	std::cout << bubu << std::endl;

	try {
		bubu.demote();
	} catch(Bureaucrat::GradeTooHighException too) {
		std::cout << too.what();
	}

	return (0);
}
