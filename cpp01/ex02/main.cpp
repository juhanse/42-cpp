/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:47:06 by juhanse           #+#    #+#             */
/*   Updated: 2025/05/20 13:54:01 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Adresse de str        : " << &str << std::endl;
	std::cout << "Adresse via stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse via stringREF : " << &stringREF << std::endl;

	std::cout << "Valeur de str         : " << str << std::endl;
	std::cout << "Valeur via stringPTR  : " << *stringPTR << std::endl;
	std::cout << "Valeur via stringREF  : " << stringREF << std::endl;

	return (0);
}
