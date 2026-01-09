/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:19:51 by sacha             #+#    #+#             */
/*   Updated: 2025/06/24 18:29:39 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Test de base avec Dog et Cat ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "Type de j: " << j->getType() << std::endl;
    std::cout << "Type de i: " << i->getType() << std::endl;
    
    std::cout << "Son de j: ";
    j->makeSound();
    std::cout << "Son de i: ";
    i->makeSound();
    
    delete j; // should not create a leak
    delete i;
    
    std::cout << "\n=== Test de Brain ===" << std::endl;
    Brain brain1;
    brain1.setIdea(0, "Je suis un cerveau intelligent");
    brain1.setIdea(1, "J'aime réfléchir");
    brain1.setIdea(99, "Dernière idée");
    
    std::cout << "Idée 0: " << brain1.getIdea(0) << std::endl;
    std::cout << "Idée 1: " << brain1.getIdea(1) << std::endl;
    std::cout << "Idée 99: " << brain1.getIdea(99) << std::endl;
    std::cout << "Idée 50 (vide): " << brain1.getIdea(50) << std::endl;
    
    std::cout << "\n=== Test de copie de Brain ===" << std::endl;
    Brain brain2(brain1);
    std::cout << "Brain2 - Idée 0: " << brain2.getIdea(0) << std::endl;
    
    Brain brain3;
    brain3 = brain1;
    std::cout << "Brain3 - Idée 1: " << brain3.getIdea(1) << std::endl;
    
    std::cout << "\n=== Test avec WrongAnimal et WrongCat ===" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    std::cout << "Type de wrong: " << wrong->getType() << std::endl;
    std::cout << "Son de wrong: ";
    wrong->makeSound(); // Ceci ne sera pas polymorphique
    delete wrong;
    
    std::cout << "\n=== Test de tableau d'animaux ===" << std::endl;
    Animal* animals[4];
    
    for (int k = 0; k < 2; k++)
        animals[k] = new Dog();
    for (int k = 2; k < 4; k++)
        animals[k] = new Cat();
    
    for (int k = 0; k < 4; k++)
    {
        std::cout << "Animal " << k << " (" << animals[k]->getType() << "): ";
        animals[k]->makeSound();
    }
    
    for (int k = 0; k < 4; k++)
        delete animals[k];
    
    std::cout << "\n=== Test terminé ===" << std::endl;
    return 0;
}
