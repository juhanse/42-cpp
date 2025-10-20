/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/21 00:10:44 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T &a, const T &b) {
	if (a < b) {
		return a;
	}
	return b;
}

template <typename T>
const T& max(const T &a, const T &b) {
	if (a > b) {
		return a;
	}
	return b;
}

#endif
