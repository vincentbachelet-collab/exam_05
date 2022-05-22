/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:11:53 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:48:33 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
}


Fireball::~Fireball(void)
{
}

// we do the clone function in each child of the spell class
ASpell *Fireball::clone() const
{
	return (new Fireball());
}