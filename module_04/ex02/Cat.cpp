/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:09:11 by sacha             #+#    #+#             */
/*   Updated: 2025/07/02 14:42:16 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat: Default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : brain(new Brain(*other.brain))
{
    std::cout << "Cat: Copy constructor called." << std::endl;
    *this = other;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat: Destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "MEOOOOOOW I'm a cat." << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return brain->getIdea(index);
}

