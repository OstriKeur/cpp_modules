/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:11:55 by sacha             #+#    #+#             */
/*   Updated: 2025/06/23 12:40:09 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog: Copy constructor called." << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        type = other.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF I'm a dog." << std::endl;
}
