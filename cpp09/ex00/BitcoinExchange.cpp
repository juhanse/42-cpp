/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:12:59 by juhanse           #+#    #+#             */
/*   Updated: 2026/01/22 00:57:16 by juhanse          ###   ########.fr       */
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
		this->database = other.database;
	}
	return *this;
}

void BitcoinExchange::loadData(const std::string& filename) {
	std::ifstream file;
	file.open(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Could not open data file.");
	}

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		float value;

		if (std::getline(ss, date, ',') && ss >> value) {
			database[date] = value;
		}
	}
	file.close();
}

void BitcoinExchange::processFile(const std::string& filename) {
	std::ifstream file;
	file.open(filename.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Could not open data file.");
	}

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		float amount;

		if (line.find("date") == 0) {
			continue;
		}

		if (!std::getline(ss, date, '|') || !(ss >> amount)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (amount < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (amount > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        std::map<std::string, float>::iterator it = database.lower_bound(date);
        if (it == database.end() || it->first != date) {
            if (it == database.begin()) {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
            --it;
        }

        std::cout << date << " => " << amount << " = " << amount * it->second << std::endl;
	}
	file.close();
}
