/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:36:10 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/21 20:06:55 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <iterator>
#include <time.h>

class PmergeMe {
	private:
		std::vector<int> _initial;
		std::vector<int> _vector;
		std::deque<int> _deque;
		double _vTime;
		double _dTime;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& copy);
		~PmergeMe();

		PmergeMe& operator=(const PmergeMe& other);

		void initialize(int ac, char **av);
		void sort();
		void display() const;

		const std::vector<int>& getVector() const { return _vector; }
		const std::deque<int>& getDeque()  const { return _deque; }
};

#include "PmergeMe.tpp"
