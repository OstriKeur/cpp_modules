/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:19:51 by sacha             #+#    #+#             */
/*   Updated: 2025/07/02 14:28:11 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
        if (src.materias[i])
            this->materias[i] = src.materias[i]->clone();
        else
            this->materias[i] = NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        // Delete existing materias first
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
                delete this->materias[i];
        }

        // Copy materias from rhs
        for (int i = 0; i < 4; i++)
        {
            if (rhs.materias[i])
                this->materias[i] = rhs.materias[i]->clone();
            else
                this->materias[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m->clone();
            std::cout << "Learned materia of type: " << m->getType() << std::endl;
            delete m;
            return;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] && this->materias[i]->getType() == type)
        {
            std::cout << "Creating materia of type: " << type << std::endl;
            return this->materias[i]->clone();
        }
    }
    std::cout << "Materia type '" << type << "' not found" << std::endl;
    return NULL;
}
