/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:48:17 by sacha             #+#    #+#             */
/*   Updated: 2025/06/14 20:02:59 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->name << " is activated!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no energy left" << std::endl;
        return;
    }
    else if (this->hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no hit points left" << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ScavTrap " << this->name << " fiercely attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is deactivated!" << std::endl;
}
