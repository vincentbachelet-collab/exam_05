/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 18:50:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include "iostream"
#include "ASpell.hpp"
#include "map"

class ASpell;

class Warlock {
public:
	// Canonical form //
	Warlock (std::string const name, std::string const title);
	//Warlock (Warlock const &old_obj);
	//Warlock &operator=(Warlock const &rhs);
	~Warlock(void);

	// members functions //
	// const at the end to avoid to change name/title
	std::string	getName(void) const;
	std::string getTitle(void) const;
	void		setTitle(std::string const &new_title);
	void		introduce(void) const;
	void		learnSpell(ASpell *spell);
	void		forgetSpell(std::string const &spell);
	void		launchSpell(std::string const &spell);

private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell *> _arr;
};

#endif