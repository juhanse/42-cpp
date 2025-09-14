/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:29:23 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/13 15:04:56 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_bits));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}

Fixed Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;

	++this->_value;
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;

	--this->_value;
	return (tmp);
}

int Fixed::toInt(void) const {
	return (this->_value >> this->_bits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << this->_bits));
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.toFloat() <= b.toFloat()) {
		return (a);
	} else {
		return (b);
	}
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.toFloat() <= b.toFloat()) {
		return (a);
	} else {
		return (b);
	}
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.toFloat() >= b.toFloat()) {
		return (a);
	} else {
		return (b);
	}
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.toFloat() >= b.toFloat()) {
		return (a);
	} else {
		return (b);
	}
}

bool Fixed::operator>(Fixed fixed) const {
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed) const {
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed) const {
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed) const {
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed) const {
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(Fixed fixed) const {
	return (this->toFloat() != fixed.toFloat());
}

float Fixed::operator+(Fixed fixed) const {
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(Fixed fixed) const {
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(Fixed fixed) const {
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(Fixed fixed) const {
	return (this->toFloat() / fixed.toFloat());
}

int Fixed::getRawBits(void) const {
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;	
}
