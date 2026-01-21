/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:24:31 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 14:25:29 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void printContainer(const T& c) {
	for (typename T::const_iterator it = c.begin(); it != c.end(); ++it) {
		std::cout << *it << " ";
	}
}
