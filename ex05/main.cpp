/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:16:37 by sacha             #+#    #+#             */
/*   Updated: 2025/05/21 15:20:41 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "ERROR: Wrong number of arguments" << std::endl;
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        std::cout << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return 1;
    }
    harl.complain(av[1]);
    return 0;
}
