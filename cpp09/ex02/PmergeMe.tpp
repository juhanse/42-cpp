/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:24:31 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/22 01:55:32 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void PmergeMe::fordJohnson(T& container) {
	if (container.size() < 2) {
		return;
	}

	bool isOdd = (container.size() % 2);
	int odd = 0;
	if (isOdd) {
		odd = container.back();
		container.pop_back();
	}

	std::vector< std::pair<int, int> > pairs;
	pairs.reserve(container.size() / 2);

	for (size_t i = 0; i < container.size(); i += 2) {
		int x = container[i];
		int y = container[i + 1];

		if (x < y) {
			std::swap(x, y);
		}
		pairs.push_back(std::make_pair(x, y));
	}

	T sorted;
	for (size_t i = 0; i < pairs.size(); ++i) {
		sorted.push_back(pairs[i].first);
	}

	fordJohnson(sorted);

	for (size_t i = 0; i < pairs.size(); ++i) {
		int value = pairs[i].second;
		typename T::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), value);
		sorted.insert(pos, value);
	}

	if (isOdd) {
		typename T::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), odd);
		sorted.insert(pos, odd);
	}

	container = sorted;
}

template<typename T>
void printContainer(const T& c) {
	for (typename T::const_iterator it = c.begin(); it != c.end(); ++it) {
		std::cout << *it << " ";
	}
}
