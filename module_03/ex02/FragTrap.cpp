/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:08:28 by sacha             #+#    #+#             */
/*   Updated: 2025/06/25 18:47:51 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << name << " has entered the battle!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has left the battle..." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high five! ✋" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    return *this;
}

FragTrap::FragTrap(const FragTrap &other)
{
    *this = other;
}

void FragTrap::attack(const std::string &target)
{
    if (this->energy_points <= 0 || this->hit_points <= 0)
    {
        std::cout << "FragTrap " << this->name << " is too tired or too damaged to attack!" << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "FragTrap " << this->name << " powerfully attacks " << target
              << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

