/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:03:45 by sacha             #+#    #+#             */
/*   Updated: 2025/06/26 13:43:58 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << "\n=== FRAGTRAP DEMONSTRATION ===\n" << std::endl;
    
    // Test 1: Construction et affichage des stats initiales
    std::cout << "1. Creating FragTrap 'FR4G-TP'" << std::endl;
    FragTrap frag("FR4G-TP");
    std::cout << "Initial stats: ";
    frag.displayStats();
    
    // Test 2: Attaques normales
    std::cout << "\n2. Testing normal attacks:" << std::endl;
    frag.attack("Bandit");
    frag.attack("Raider");
    frag.attack("Psycho");
    
    // Test 3: Prise de dégâts
    std::cout << "\n3. Testing damage system:" << std::endl;
    std::cout << "Before damage: ";
    frag.displayStats();
    frag.takeDamage(20);
    std::cout << "After 20 damage: ";
    frag.displayStats();
    frag.takeDamage(15);
    std::cout << "After 15 more damage: ";
    frag.displayStats();
    
    // Test 4: Réparation
    std::cout << "\n4. Testing repair system:" << std::endl;
    std::cout << "Before repair: ";
    frag.displayStats();
    frag.beRepaired(10);
    std::cout << "After 10 HP repair: ";
    frag.displayStats();
    frag.beRepaired(5);
    std::cout << "After 5 HP repair: ";
    frag.displayStats();
    
    // Test 5: Fonction spéciale FragTrap
    std::cout << "\n5. Testing FragTrap special ability:" << std::endl;
    frag.highFivesGuys();
    
    // Test 6: Test des limites (énergie épuisée)
    std::cout << "\n6. Testing energy limits:" << std::endl;
    std::cout << "Current stats: ";
    frag.displayStats();
    for (int i = 0; i < 10; i++) {
        std::string target = "Target";
        target += (i + '0');
        frag.attack(target);
    }
    std::cout << "After multiple attacks: ";
    frag.displayStats();
    
    // Test 7: Test des limites (HP à 0)
    std::cout << "\n7. Testing HP limits:" << std::endl;
    std::cout << "Current stats: ";
    frag.displayStats();
    frag.takeDamage(100);
    std::cout << "After massive damage: ";
    frag.displayStats();
    frag.attack("Should not work");
    frag.beRepaired(10);
    
    // Test 8: Copie et assignation
    std::cout << "\n8. Testing copy constructor and assignment:" << std::endl;
    FragTrap copy1(frag);
    std::cout << "Copy constructor stats: ";
    copy1.displayStats();
    
    FragTrap copy2("TEMP");
    copy2 = frag;
    std::cout << "Assignment operator stats: ";
    copy2.displayStats();
    
    // Test 9: Ordre de destruction (IMPORTANT pour l'héritage)
    std::cout << "\n9. Testing destruction order (FragTrap before ClapTrap):" << std::endl;
    {
        std::cout << "Creating FragTrap inside a scope..." << std::endl;
        FragTrap testFrag("TEST-FRAG");
        std::cout << "FragTrap created. About to leave scope..." << std::endl;
    } // Ici, testFrag est détruit automatiquement
    std::cout << "Scope ended. Destruction should have happened in this order:" << std::endl;
    std::cout << "  1. FragTrap destructor called" << std::endl;
    std::cout << "  2. ClapTrap destructor called" << std::endl;
    
    std::cout << "\n=== END OF FRAGTRAP DEMONSTRATION ===" << std::endl;
    std::cout << "Main function ending - frag will be destroyed now:" << std::endl;
    return 0;
}
