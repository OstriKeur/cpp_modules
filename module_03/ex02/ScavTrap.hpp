/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:23:13 by sacha             #+#    #+#             */
/*   Updated: 2025/06/14 20:01:11 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
	void attack(const std::string &target);
	ScavTrap &operator=(const ScavTrap &other);
	ScavTrap(const ScavTrap &other);
	ScavTrap();
};
#endif
