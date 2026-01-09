/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:16:52 by sacha             #+#    #+#             */
/*   Updated: 2025/05/17 15:27:51 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon(std::string type);
	const std::string &getType() const;
	void setType(std::string type);
};

#endif
