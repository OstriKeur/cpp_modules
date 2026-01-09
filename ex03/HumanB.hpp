/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:20:50 by sacha             #+#    #+#             */
/*   Updated: 2025/05/17 15:27:38 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
	std::string name;
	Weapon *weapon;

  public:
	HumanB(std::string name);
	void attack() const;
	void setWeapon(Weapon &weapon);
};
#endif
