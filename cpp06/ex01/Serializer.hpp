/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/30 00:16:53 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

typedef struct Data {
	std::string		firstname;
	std::string		lastname;
	unsigned int	age;
} Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& copy);
		~Serializer();

		Serializer& operator=(const Serializer& other);

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
};
