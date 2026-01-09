/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:27:27 by sacha             #+#    #+#             */
/*   Updated: 2025/05/22 16:18:52 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	int		index;

	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		std::cout << "Available levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		harl.complain("DEBUG");
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("INFO");
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("WARNING");
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("ERROR");
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

