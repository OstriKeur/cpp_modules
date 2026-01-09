/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:12:01 by sacha             #+#    #+#             */
/*   Updated: 2025/06/23 11:28:33 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &other);
        virtual ~Dog();
        Dog &operator=(const Dog &other);
        void makeSound() const;
};
#endif
