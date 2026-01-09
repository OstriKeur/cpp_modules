/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:48:32 by sacha             #+#    #+#             */
/*   Updated: 2025/05/22 23:43:21 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
