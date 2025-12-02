/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:54:22 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/02 13:08:34 by juhanse          ###   ########.fr       */
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
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
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

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
	return (this->c.rend());
}
