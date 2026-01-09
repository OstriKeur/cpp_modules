/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:22:49 by sacha             #+#    #+#             */
/*   Updated: 2025/06/26 12:59:44 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n=== TEST 1: Construction des robots ===\n";
    ClapTrap clap("ClapTrap");
    ScavTrap scav("ScavTrap");
    
    std::cout << "\n=== TEST 2: Comparaison des statistiques ===\n";
    std::cout << "ClapTrap stats: ";
    clap.displayStats();
    std::cout << "ScavTrap stats: ";
    scav.displayStats();
    
    std::cout << "\n=== TEST 3: Fonctionnalité unique de ScavTrap ===\n";
    scav.guardGate();
    
    std::cout << "\n=== TEST 4: Attaque de ScavTrap (redéfinie) ===\n";
    scav.attack("Enemy");
    
    std::cout << "\n=== TEST 5: Test de copie de ScavTrap ===\n";
    ScavTrap scavCopy(scav);
    std::cout << "ScavTrap copié créé avec succès!\n";
    
    std::cout << "\n=== TEST 6: Test d'assignation de ScavTrap ===\n";
    ScavTrap scavAssign("Temporary");
    scavAssign = scav;
    std::cout << "ScavTrap assigné avec succès!\n";
    
    std::cout << "\n=== TEST 7: Test des limites d'énergie de ScavTrap ===\n";
    for (int i = 0; i < 55; i++) {
        std::cout << "Attaque " << (i + 1) << ": ";
        scav.attack("Target");
    }
    
    std::cout << "\n=== TEST 8: Destruction automatique ===\n";
    return 0;
}
