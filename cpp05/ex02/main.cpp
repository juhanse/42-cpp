/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 15:10:20 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"

int	main(void) {
	Bureaucrat michel("Michel", 2);
	PresidentialPardonForm form("Michel");

	std::cout << michel << std::endl;
	std::cout << form << std::endl;

	return (0);
}
