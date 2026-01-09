/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:21:45 by sacha             #+#    #+#             */
/*   Updated: 2025/06/25 18:17:48 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap: Constructor of " << name << " called." << std::endl;
    displayStats();
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap: Constructor of " << name << " called." << std::endl;
    displayStats();
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor of " << this->name << " called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    return *this;
}

void ClapTrap::displayStats()
{
    std::cout << "ClapTrap " << this->name << " has:" << std::endl;
    std::cout << "   " << this->hit_points << " Hit points left." << std::endl;
    std::cout << "   " << this->energy_points << " Energy points left." << std::endl;
    std::cout << "   " << this->attack_damage << " Attack damage." << std::endl;
    std::cout << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy left" << std::endl;
        return;
    }
    else if (this->hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    displayStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
        return;
    }
    this->hit_points -= amount;
    if (this->hit_points < 0)
    {
        std::cout << "Claptrap " << this->name << " took " << amount << " damage after being attacked!" << std::endl;
        this->hit_points = 0;
    }
    else
        std::cout << "Claptrap " << this->name << " took " << amount << " damage after being attacked!" << std::endl;
    displayStats();
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy left" << std::endl;
        return;
    }
    if (this->hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
        return;
    }
    this->energy_points--;
    this->hit_points += amount;
    if (this->hit_points > 10)
    {
        std::cout << "ClapTrap " << this->name << " got repaired for " << amount << " Hit Points." << std::endl;
        this->hit_points = 10;
    }
    else
        std::cout << "ClapTrap " << this->name << " got repaired for " << amount << " Hit Points." << std::endl;
    displayStats();
}
