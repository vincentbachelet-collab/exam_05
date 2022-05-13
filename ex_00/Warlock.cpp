/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:08 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 12:00:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

// CANONICAL FORM //

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout<< name <<": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &rhs)
{
	this->_name = rhs->_name;
	this->_title = rhs->title;
	*this = rhs;
	std::cout<< this->_name <<": This looks like another boring day." << std::endl;
}

Warlock Warlock::&operator=(const Warlock &obj)
~Warlock::Warlock(void)
{
	std::cout<< this->_name << ": My job here is done!" << std::endl;
}

