/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:28:35 by juhanse           #+#    #+#             */
/*   Updated: 2025/09/13 15:07:18 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _value;
		static const int _bits;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed& operator=(const Fixed& other);
		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		int toInt(void) const;
		float toFloat(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		bool operator>(Fixed fixed) const;
		bool operator<(Fixed fixed) const;
		bool operator>=(Fixed fixed) const;
		bool operator<=(Fixed fixed) const;
		bool operator==(Fixed fixed) const;
		bool operator!=(Fixed fixed) const;

		float operator+(Fixed fixed) const;
		float operator-(Fixed fixed) const;
		float operator*(Fixed fixed) const;
		float operator/(Fixed fixed) const;

		int getRawBits(void) const;
		void setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
