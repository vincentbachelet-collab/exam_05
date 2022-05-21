/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:45:24 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 19:03:05 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fwoosh.hpp"

ASpell::ASpell(std::string name, std::string effects)
				: _name(name), _effects(effects)
{
	std::cout << "Constructor ASpell called" << std::endl;
}

ASpell::ASpell(ASpell const &old_obj)
{
	std::cout << "copy constructor called" << std::endl;
	*this = old_obj;
}


ASpell::~ASpell(void)
{
	std::cout << "destructor ASpell called" << std::endl;
}

// member functions
std::string	ASpell::getName(void) const
{
	return (this->_name);
}

std::string ASpell::getEffects(void) const
{
	return (this->_effects);
}

ASpell *Fwoosh::clone() const
{
    return (new Fwoosh());
}