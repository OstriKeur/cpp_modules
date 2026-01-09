/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:19:51 by sacha             #+#    #+#             */
/*   Updated: 2025/07/02 13:07:51 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     std::cout << "=== Test de base avec Dog et Cat ===" << std::endl;
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    
//     std::cout << "Type de j: " << j->getType() << std::endl;
//     std::cout << "Type de i: " << i->getType() << std::endl;
    
//     std::cout << "Son de j: ";
//     j->makeSound();
//     std::cout << "Son de i: ";
//     i->makeSound();
    
//     delete j; // should not create a leak
//     delete i;
    
//     std::cout << "\n=== Test de Brain ===" << std::endl;
//     Brain brain1;
//     brain1.setIdea(0, "Je suis un cerveau intelligent");
//     brain1.setIdea(1, "J'aime réfléchir");
//     brain1.setIdea(99, "Dernière idée");
    
//     std::cout << "Idée 0: " << brain1.getIdea(0) << std::endl;
//     std::cout << "Idée 1: " << brain1.getIdea(1) << std::endl;
//     std::cout << "Idée 99: " << brain1.getIdea(99) << std::endl;
//     std::cout << "Idée 50 (vide): " << brain1.getIdea(50) << std::endl;
    
//     std::cout << "\n=== Test de copie de Brain ===" << std::endl;
//     Brain brain2(brain1);
//     std::cout << "Brain2 - Idée 0: " << brain2.getIdea(0) << std::endl;
    
//     Brain brain3;
//     brain3 = brain1;
//     std::cout << "Brain3 - Idée 1: " << brain3.getIdea(1) << std::endl;
    
//     std::cout << "\n=== Test avec WrongAnimal et WrongCat ===" << std::endl;
//     const WrongAnimal* wrong = new WrongCat();
//     std::cout << "Type de wrong: " << wrong->getType() << std::endl;
//     std::cout << "Son de wrong: ";
//     wrong->makeSound(); // Ceci ne sera pas polymorphique
//     delete wrong;
    
//     std::cout << "\n=== Test de tableau d'animaux ===" << std::endl;
//     Animal* animals[4];
    
//     for (int k = 0; k < 2; k++)
//         animals[k] = new Dog();
//     for (int k = 2; k < 4; k++)
//         animals[k] = new Cat();
    
//     for (int k = 0; k < 4; k++)
//     {
//         std::cout << "Animal " << k << " (" << animals[k]->getType() << "): ";
//         animals[k]->makeSound();
//     }
    
//     for (int k = 0; k < 4; k++)
//         delete animals[k];
    
//     std::cout << "\n=== Test terminé ===" << std::endl;
//     return 0;
// }


int main(void) {
    std::cout << "\n\033[1;34m=== Creating Animals Array ===\033[0m" << std::endl;
    Animal* animals[10];

    for (int i = 0; i < 5; ++i)
        animals[i] = new Dog();
    for (int i = 5; i < 10; ++i)
        animals[i] = new Cat();

    std::cout << "\n\033[1;34m=== Deleting Animals Array ===\033[0m" << std::endl;
    for (int i = 0; i < 10; ++i)
        delete animals[i];

    std::cout << "\n\033[1;34m=== Deep Copy Test ===\033[0m" << std::endl;
    Dog original;
    original.setIdea(0, "Chase the cat");
    original.setIdea(1, "Bark at the mailman");

    Dog copy(original);
    copy.setIdea(0, "Nap on the sofa");  // change in copy
    original.setIdea(2, "Roll in the grass");    // add in original

    std::cout << "Original idea[0]: " << original.getIdea(0) << std::endl;
    std::cout << "Original idea[1]: " << original.getIdea(1) << std::endl;
    std::cout << "Original idea[2]: " << original.getIdea(2) << std::endl;
    std::cout << "Copy idea[0]:     " << copy.getIdea(0) << std::endl;
    std::cout << "Copy idea[1]:     " << copy.getIdea(1) << std::endl;

    std::cout << "\n\033[1;34m=== Assignment Operator Test ===\033[0m" << std::endl;
    Cat cat;
    cat.setIdea(0, "Scratch the sofa");

    Cat cat1;
    cat.setIdea(0, "Sleep in the sun");
    cat1 = cat; // operator=

    cat.setIdea(0, "Knock over a glass");

    std::cout << "Cat idea[0]: " << cat.getIdea(0) << std::endl;
    std::cout << "Cat1 idea[0]: " << cat1.getIdea(0) << std::endl;
    
    std::cout << "\n\033[1;34m=== Basic Leak Check from Subject ===\033[0m" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // should not create a leak
    delete i;

    std::cout << "\n\033[1;34m=== Destructors ===\033[0m" << std::endl;

    return 0;
}
