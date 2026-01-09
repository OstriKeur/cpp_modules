/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:17:00 by sacha             #+#    #+#             */
/*   Updated: 2025/05/28 12:11:37 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const float &value)
{
	this->value = roundf(value * (1 << fractional_bits));
}

Fixed::Fixed(const int &value)
{
	this->value = value << fractional_bits;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return (float(value) / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
	return (value >> fractional_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (value > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (value != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	value++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	value--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
