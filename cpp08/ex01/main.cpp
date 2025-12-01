/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:12:13 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/28 18:13:37 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);

		for (int i = 0; i < 10000; i++) {
			sp.addNumber(i * 2);
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(3);

		try {
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
		} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
