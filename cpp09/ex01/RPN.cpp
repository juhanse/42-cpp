/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:12:59 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/13 15:05:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) {
	*this = other;
}

RPN& RPN::operator=(const RPN& other) {
	(void)other;
	return *this;
}

int RPN::operation(const std::string& operator) {
	if (operator == '*' || operator == '/' || operator == '-' || operator == '+') {
		return (1);
	}
	return (0);
}

int	RPN::calculate(const std::string& expression) {
	std::stack<int> stack;
	std::istringstream iss(expression);
	std::string token;

	return stack.top();
}
