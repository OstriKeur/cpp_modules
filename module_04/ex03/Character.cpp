/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:19:19 by sacha             #+#    #+#             */
/*   Updated: 2025/07/02 14:56:31 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name), unequippedCount(0)
{
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		unequipped[i] = NULL;
	}
}

Character::Character(Character const &other) : name(other.name), unequippedCount(other.unequippedCount) {
    // Initialize arrays first
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
        unequipped[i] = NULL;
    }
    
    // Deep copy inventory
    for (int i = 0; i < 4; i++) {
        if (other.inventory[i]) {
            inventory[i] = other.inventory[i]->clone();
        }
    }
    
    // Deep copy unequipped items
    for (int i = 0; i < other.unequippedCount; i++) {
        if (other.unequipped[i]) {
            unequipped[i] = other.unequipped[i]->clone();
        }
    }
}

Character::~Character()
{
	// Delete inventory items
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	
	// Delete unequipped items
	for (int i = 0; i < unequippedCount; i++)
	{
		if (unequipped[i] != NULL)
			delete unequipped[i];
	}
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
    
        // Delete and copy inventory
        for (int i = 0; i < 4; ++i) {
            if (inventory[i]) {
                delete inventory[i];
                inventory[i] = NULL;
            }
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
        }

        // Delete current unequipped items
        for (int i = 0; i < unequippedCount; ++i) {
            if (unequipped[i])
                delete unequipped[i];
            unequipped[i] = NULL;
        }
        
        // Copy unequipped items from other
        unequippedCount = other.unequippedCount;
        for (int i = 0; i < other.unequippedCount; ++i) {
            if (other.unequipped[i])
                unequipped[i] = other.unequipped[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (m == NULL)
		return;
		
	// Find first empty slot
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
			return;
		}
	}
	// Inventory is full - delete the materia to prevent memory leak
	std::cout << name << "'s inventory full. Discarding materia: " << m->getType() << std::endl;
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
		return;
		
	// Store the materia in unequipped array
	if (unequippedCount < 4)
	{
		unequipped[unequippedCount] = inventory[idx];
		unequippedCount++;
	}
	
	std::cout << name << " unequipped " << inventory[idx]->getType() << " materia from slot " << idx << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
	{
		std::cout << "Cannot use materia: invalid index or empty slot" << std::endl;
		return;
	}
		
	inventory[idx]->use(target);
}

