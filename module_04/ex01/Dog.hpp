/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:12:01 by sacha             #+#    #+#             */
/*   Updated: 2025/07/01 16:09:18 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        virtual ~Dog();
        Dog &operator=(const Dog &other);
        void makeSound() const;
        void    setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};
#endif
