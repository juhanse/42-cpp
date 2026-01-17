/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/17 01:31:09 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cstdlib>

class RPN {
	private:
		int _a;
		int _b;
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();

		RPN& operator=(const RPN& other);

		int result() const;
		void operation(const std::string& token);
		void calculate(const std::string& expression);
};
