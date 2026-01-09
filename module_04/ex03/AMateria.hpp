/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:17:53 by sacha             #+#    #+#             */
/*   Updated: 2025/06/27 11:52:43 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
  public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
    
	virtual ~AMateria();
    
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
	AMateria &operator=(AMateria const &rhs);

  protected:
	std::string type;
};

#endif
