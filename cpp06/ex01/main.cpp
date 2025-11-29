/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:29 by juhanse           #+#    #+#             */
/*   Updated: 2025/11/30 00:16:42 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void) {
	Data *data = new Data;
	data->firstname = "Julien";
	data->lastname = "Hanse";
	data->age = 42;

	uintptr_t raw = Serializer::serialize(data);
	Data *serialized = Serializer::deserialize(raw);

	std::cout << "Original Data address: " << data << std::endl;
	std::cout << "Serialized Data address: " << serialized << std::endl;
	std::cout << "Firstname: " << serialized->firstname << std::endl;
	std::cout << "Lastname: " << serialized->lastname << std::endl;
	std::cout << "Age: " << serialized->age << std::endl;

	delete data;
	return (0);
}
