/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:36:10 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 11:43:03 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <time.h>

class PmergeMe {
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
		double _vectorTime;
		double _dequeTime;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();

		PmergeMe& operator=(const PmergeMe& other);

		std::vector<int> getVector() const { return _vector; }
		std::deque<int> getDeque() const { return _deque; }
		void merge_insert(int ac, char **av);
};
