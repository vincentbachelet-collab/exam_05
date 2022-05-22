/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:20:20 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 18:31:12 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#pragma once
#include "ASpell.hpp"
#include "map"
#include "iostream"

class SpellBook {
public :
	SpellBook();
	~SpellBook();

	//member functions
	void	learnSpell(ASpell *spell_to_learn); // copies a spell in the book
	void	forgetSpell(std::string const &spell_adr);
	ASpell	*createSpell(std::string const &spell_adr); // create a spell and return it

protected :
	std::map<std::string, ASpell *> _book;

};

#endif