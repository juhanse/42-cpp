/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:47:06 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/11 18:47:52 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4) {
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

	std::string line;
	std::string content;
	while (std::getline(input, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		line += '\n';
		content.append(line);
	}

	std::ofstream output((filename + ".replace").c_str());
	output << content;
	if (output.good() == false) {
		std::cout << "Could not create output file" << std::endl;
		input.close();
		return (1);
	}

	input.close();
	output.close();
	return (0);
}
