/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:19:13 by sacha             #+#    #+#             */
/*   Updated: 2025/07/01 16:38:22 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter 
{
public:
    Character();
	Character(std::string const & name);
	Character(Character const & src);
	~Character();
	Character & operator=(Character const & rhs);

	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);
    
private:
	std::string name;
	AMateria *inventory[4];
    AMateria *unequipped[4];
    int unequippedCount;
};

#endif
