/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 16:21:11 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(size_t n) : _array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _array(NULL), _size(0) {
	*this = other;
}

template <typename T>
Array<T>::~Array(void) {
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
	if (index >= _size)
		throw IndexOutOfBoundsException();
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const {
	if (index >= _size)
		throw IndexOutOfBoundsException();
	return _array[index];
}

template <typename T>
size_t Array<T>::size(void) const {
	return _size;
}

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw() {
	return "Index out of bounds";
}
