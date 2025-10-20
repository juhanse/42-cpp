/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/21 00:29:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {
	private:
		T*              _array;
		size_t          _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		~Array();

		Array& operator=(const Array& other);
		T& operator[](size_t index);
		const T& operator[](size_t index) const;

		size_t size() const;

		class IndexOutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif
