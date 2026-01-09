/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:30:29 by sacha             #+#    #+#             */
/*   Updated: 2025/05/15 17:35:13 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;

	std::cout << "--------------------------------" << std::endl;
	randomChump("CrazyZombie");
	return (0);
}
