/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:17:59 by sacha             #+#    #+#             */
/*   Updated: 2025/07/01 16:58:00 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(AMateria const & src) : type(src.type) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return this->type; }

AMateria & AMateria::operator=(AMateria const & rhs) {
    (void)rhs;
    return *this;
}

void AMateria::use(ICharacter & target) {
    std::cout << "AMateria: " << this->type << " used on " << target.getName() << std::endl;
}
