/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:11:49 by sacha             #+#    #+#             */
/*   Updated: 2025/06/23 11:28:35 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &other);
        virtual ~Cat();
        Cat &operator=(const Cat &other);
        void makeSound() const;
};
#endif
