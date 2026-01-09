/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:59:37 by sacha             #+#    #+#             */
/*   Updated: 2025/05/28 12:09:39 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.value;
	return (*this);
}

Fixed::Fixed(const float &value)
{
    std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << fractional_bits));
}

Fixed::Fixed(const int &value)
{
    std::cout << "Int constructor called" << std::endl;
	this->value = value << fractional_bits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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



