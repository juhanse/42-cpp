/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 14:34:05 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class NotFoundException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Number not found");
		}
};

template <typename T>
int	easyfind(T &container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);

	if (it == container.end()) {
		throw NotFoundException();
	}

	return (*it);
}
