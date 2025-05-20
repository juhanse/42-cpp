/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:47:06 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 16:45:27 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

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
	std::ofstream output((filename + ".replace").c_str());

	std::string line;
	int	i = 0;
	while (getline(input, line))
	{
		i++;
		if (line.find(s1))
		{
			line.replace(i, s1.length(), s2);
		}
		std::cout << line << std::endl;
	}	

	output << input.rdbuf();
	input.close();
	output.close();
	return (0);
}
