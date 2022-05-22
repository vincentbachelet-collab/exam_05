/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:09:39 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:05:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string type) : _type(type)
{
}

ATarget::ATarget(ATarget const &old_obj)
{
	*this = old_obj;
}

ATarget::~ATarget(void)
{
}

// member functions

void		ATarget::getHitSpell(ASpell const &spell) const
{
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
	//std::cout << this->_type << " is the ATarget's type, and " << spell.getEffects()
	//<< " is the return of the ASpell's getEffects function." << std::endl;
}
