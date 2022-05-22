/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:27:39 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:44:26 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "Fwooshed")
{
}


Fwoosh::~Fwoosh(void)
{
}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}