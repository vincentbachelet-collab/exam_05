/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:27:39 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 18:23:12 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "Fwooshed")
{
	std::cout << "Fwooshed constructor called" << std::endl;
}

Fwoosh::Fwoosh(Fwoosh const &old_obj) : ASpell("Fwoosh", "Fwooshed")
{
	std::cout << "Fwooshed copy constructor called" << std::endl;
	*this = old_obj;
}

Fwoosh::~Fwoosh(void)
{
	std::cout << "destructor Fwoosh called" << std::endl;
}