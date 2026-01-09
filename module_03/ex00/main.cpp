/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:21:47 by sacha             #+#    #+#             */
/*   Updated: 2025/06/14 19:46:08 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("Bender");

    robot.attack("Target1");
    robot.takeDamage(3);
    robot.beRepaired(2);
    robot.attack("Target2");
    robot.takeDamage(8);
    robot.beRepaired(5);
    robot.attack("Target3");

    return 0;
}

