/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:26:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 19:04:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
	std::cout << "Dummy constructor called" << std::endl;
}

ATarget *Dummy::clone() const
{
    return (new Dummy());
}

Dummy::~Dummy(void)
{
	std::cout << "Dummy destructor called" << std::endl;
}