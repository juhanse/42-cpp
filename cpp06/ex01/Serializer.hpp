/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/10/22 21:52:36 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

typedef struct s_Data {
	std::string string;
	int			number;
	float		float_num;
	double		double_num;
}	Data;

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& copy);
		~Serializer();

		Serializer& operator=(const Serializer& other);

	public:
		static uintptr_t	serialize(void* ptr);
		static Data* 		deserialize(uintptr_t raw);
};
