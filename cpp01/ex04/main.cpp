/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:47:06 by juhanse           #+#    #+#             */
/*   Updated: 2025/06/02 15:12:52 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return (1); 
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream input(filename.c_str());
	if (input.good() == false) {
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::ofstream output((filename + ".replace").c_str());
	if (output.good() == false) {
		std::cout << "Could not create output file" << std::endl;
		input.close();
		return (1);
	}
	std::string buffer;
	while (getline(input, buffer))
		// function

	input.close();
	output.close();
	return (0);
}
