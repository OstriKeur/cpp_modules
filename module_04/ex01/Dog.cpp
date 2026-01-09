/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:11:55 by sacha             #+#    #+#             */
/*   Updated: 2025/07/02 14:25:10 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog: Default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : brain(new Brain(*other.brain))
{
    std::cout << "Dog: Copy constructor called." << std::endl;
    *this = other;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog: Destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "WOOOOOF I'm a dog." << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return brain->getIdea(index);
}
