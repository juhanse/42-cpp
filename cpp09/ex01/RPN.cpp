/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:12:59 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/17 01:33:55 by juhanse          ###   ########.fr       */
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

int RPN::result() const {
	if (_stack.empty()) {
		throw std::runtime_error("Error: Stack is empty");
	}

	return _stack.top();
}

void RPN::operation(const std::string& token) {
	int result;

	_b = _stack.top();
	_stack.pop();
	_a = _stack.top();
	_stack.pop();

	if (token == "+") {
		result = _a + _b;
	} else if (token == "-") {
		result = _a - _b;
	} else if (token == "*") {
		result = _a * _b;
	} else if (token == "/") {
		if (_b == 0) {
			throw std::runtime_error("Error: Division by zero");
		}
		result = _a / _b;
	} else {
		throw std::runtime_error("Error: Unknown operator");
	}

	_stack.push(result);
}

void RPN::calculate(const std::string& expression) {
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (token.length() == 1 && std::isdigit(token[0])) {
			_stack.push(token[0] - '0');
		} else if (token == "+" || token == "-" || token == "*" || token == "/") {
			try {
				operation(token);
			} catch (const std::exception& e) {
				throw;
			}
		} else {
			throw std::runtime_error("Error: Invalid token");
		}
	}

	if (_stack.size() != 1) {
		throw std::runtime_error("Error: Invalid RPN expression");
	}
}
