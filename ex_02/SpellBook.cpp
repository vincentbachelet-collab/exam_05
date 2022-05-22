/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:30:18 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 19:09:34 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
	std::cout << "SpellBook Created" << std::endl;
}

SpellBook::~SpellBook()
{
	std::cout << "SpellBook destroyed" << std::endl;
}

void	SpellBook::learnSpell(ASpell *spell_to_learn)
{
	if (spell_to_learn)
	{
		_book.insert(std::pair<std::string, ASpell *>
		(spell_to_learn->getName(), spell_to_learn->clone()));
		std::cout << "SPELL ADDED TO THE BOOK" << std::endl;
	}
}

void	SpellBook::forgetSpell(std::string const &spell_ref)
{
	ASpell *bigSpell = _book[spell_ref];
	if (bigSpell)
	{
		_book.erase(spell_ref);
		std::cout << "SPELL FROM BOOK WAS ERASED" << std::endl;
	}
}

//PAS COMPRIS CELUI LA
ASpell	*SpellBook::createSpell(std::string const &spell)
{
	std::map <std::string, ASpell *>::iterator it;
	it = _book.find(spell);
	if (it != _book.end())
		return (_book[spell]);
	return NULL;
}