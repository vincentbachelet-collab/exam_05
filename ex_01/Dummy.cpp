/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:26:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 18:29:39 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
	std::cout << "Dummy constructor called" << std::endl;
}

Dummy::Dummy(Dummy const &old_obj) : ATarget("Target Practice Dummy")
{
	std::cout << "Dummy copy constructor called" << std::endl;
	*this = old_obj;
}

Dummy::~Dummy(void)
{
	std::cout << "Dummy destructor called" << std::endl;
}