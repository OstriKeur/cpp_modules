/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:06:50 by sacha             #+#    #+#             */
/*   Updated: 2025/06/14 20:14:56 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
	void attack(const std::string &target);
	FragTrap &operator=(const FragTrap &other);
	FragTrap(const FragTrap &other);
	FragTrap();
};

#endif
