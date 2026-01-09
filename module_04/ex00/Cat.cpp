/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:09:11 by sacha             #+#    #+#             */
/*   Updated: 2025/06/23 12:40:09 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat: Copy constructor called." << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        type = other.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "MEOOOOOOW I'm a cat." << std::endl;
}
