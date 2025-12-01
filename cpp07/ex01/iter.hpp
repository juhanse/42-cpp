/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:08:12 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/01 15:40:08 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void	iter(T* array, const size_t length, void (*function)(T&)) {
	for (size_t i = 0; i < length; i++) {
		function(array[i]);
	}
}
