/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:58:32 by sacha             #+#    #+#             */
/*   Updated: 2025/06/24 18:26:36 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const WrongAnimal *WrongMeta = new WrongAnimal();
    const WrongAnimal *wcat = new WrongCat();
    const Animal *meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wcat->makeSound();
    WrongMeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete WrongMeta;
	delete wcat;

	std::cout << std::endl << "///////////////////////////////////////////" << std::endl << std::endl;

	Cat testcat;
	WrongCat testwcat;
	WrongAnimal testwanimal;
	
	testcat.makeSound();
	testwcat.makeSound();
	testwanimal.makeSound();
    
    return 0;
}
