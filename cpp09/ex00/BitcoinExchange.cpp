/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:12:59 by juhanse           #+#    #+#             */
/*   Updated: 2025/12/05 12:29:53 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {
		this->dataMap = other.dataMap;
	}
	return *this;
}

void BitcoinExchange::loadData(const std::string& filename) {
	std::ifstream file(filename);
	if (!file.is_open()) {
		throw std::runtime_error("Could not open data file.");
	}

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		float value;

		if (std::getline(ss, date, ',') && ss >> value) {
			dataMap[date] = value;
		}
	}
	file.close();
}
