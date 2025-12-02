/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:54:22 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 12:59:19 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){}
	
template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy) {
	*this = copy;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this != &other) {
		std::stack<T>::operator=(other);
	}
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
	return (this->c.end());
}
