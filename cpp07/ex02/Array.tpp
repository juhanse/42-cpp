/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/21 00:29:39 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& copy) : _array(nullptr), _size(0) {
	*this = copy;
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (size_t i = 0; i < _size; ++i) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= _size) {
		throw IndexOutOfBoundsException();
	}
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const {
	if (index >= _size) {
		throw IndexOutOfBoundsException();
	}
	return _array[index];
}

template <typename T>
size_t Array<T>::size() const {
	return _size;
}

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw() {
	return "Index out of bounds";
}

#endif
