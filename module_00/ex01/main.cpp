/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:26:22 by sacha             #+#    #+#             */
/*   Updated: 2025/05/15 19:48:59 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void testZombieHorde(int N, std::string name) {
	std::cout << "🌟 Test with " << N << " zombies named \"" << name << "\":" << std::endl;
		
	if(N < 0 || N == 0) {
		std::cerr << "❌ Error: Unable to create a horde of " << N << " zombies." << std::endl;
		return ;
	}
	Zombie* horde = zombieHorde(N, name);

	if (horde) {
		for (int i = 0; i < N; ++i) {
			std::cout << "👻 ";
			horde[i].announce();
		}
		delete[] horde;
		std::cout << "✅ Zombie horde test completed successfully!" << std::endl;
	}
	else {
		std::cerr << "❌ Error: Unable to create a horde of " << N << " zombies." << std::endl;
	}
	std::cout << "-----------------------------------------" << std::endl;
}

 
int main()
{
	testZombieHorde(5, "Zombie");
	testZombieHorde(1, "Single Zombie");
	testZombieHorde(0, "No Zombie");
	testZombieHorde(3, "DifferentZombie");
	testZombieHorde(-1, "NegativeZombie");

	std::cout << "============================================================" << std::endl;
	std::cout << "==================== END OF THE TEST =======================" << std::endl;
	return 0;
}
