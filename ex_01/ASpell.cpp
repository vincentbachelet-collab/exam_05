/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:45:24 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 16:24:53 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "Fwoosh.hpp"

ASpell::ASpell(std::string name, std::string effects)
				: _name(name), _effects(effects)
{
}

ASpell::ASpell(ASpell const &old_obj)
{
	*this = old_obj;
}


ASpell::~ASpell(void)
{
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