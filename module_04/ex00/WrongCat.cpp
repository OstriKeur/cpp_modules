/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:13:29 by sacha             #+#    #+#             */
/*   Updated: 2025/06/23 12:38:51 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat: Copy constructor called." << std::endl;
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        type = other.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Woof Woof I'm a WrongCat." << std::endl;
}

