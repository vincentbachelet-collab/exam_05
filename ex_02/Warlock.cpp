/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:08 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 19:03:53 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ": This looks like another boring day" << std::endl;
}

Warlock::~Warlock (void) {
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

//member functions

std::string		Warlock::getName(void) const {
	return (this->_name);
}

std::string		Warlock::getTitle(void) const {
	return (this->_title);
}

void			Warlock::setTitle(std::string const &new_title) {
	this->_title = new_title;
}

void 			Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name << " " << this->_title << "!" << std::endl;
}

void			Warlock::learnSpell(ASpell *spell)
{
	// Here I store the spell directly, insert allow to add in map<
	if (spell)
		_arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	_SpellBook.learnSpell(spell);
}

void			Warlock::launchSpell(std::string spell, ATarget const &target)
{
	ATarget const *test = 0;
    if (test == &target)
        return;
    ASpell *temp = _SpellBook.createSpell(spell);
    if (temp)
        temp->launch(target);
}

void			Warlock::forgetSpell(std::string spell_ref)
{
	ASpell *bigSpell2 = _arr[spell_ref];
	if (bigSpell2)
	{
		std::cout << "PROUT" << std::endl;
		this->_SpellBook.forgetSpell(spell_ref);
		this->_arr.erase(spell_ref);
	}
}