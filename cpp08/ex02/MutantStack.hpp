/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:12:26 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 12:56:37 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(const MutantStack<T>& copy);
		~MutantStack();

		MutantStack& operator=(const MutantStack& other);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"
