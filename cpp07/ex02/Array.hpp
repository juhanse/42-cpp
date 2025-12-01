/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 16:20:29 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {
	private:
		T*		_array;
		size_t	_size;

	public:
		Array();
		Array(size_t n);
		Array(const Array& copy);
		~Array();

		Array& operator=(const Array& other);
		T& operator[](size_t index);
		const T& operator[](size_t index) const;

		size_t size(void) const;

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"
