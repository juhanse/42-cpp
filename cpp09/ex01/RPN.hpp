/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/13 15:05:19 by juhanse          ###   ########.fr       */
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
	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();

		RPN& operator=(const RPN& other);

		int operation(const std::string& operator);
		int calculate(const std::string& expression);
};
