/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:59:34 by sacha             #+#    #+#             */
/*   Updated: 2025/06/26 16:15:58 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called." << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy constructor called." << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}
void Animal::makeSound() const
{
	std::cout << "No animal type, no sound." << std::endl;
}

