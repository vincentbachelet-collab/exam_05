
#ifndef ASPELL_HPP
#define ASPELL_HPP
#include "iostream"
#include "ATarget.hpp"

class ATarget;

class ASpell {
public:
	// Canonical form //
	ASpell(std::string name, std::string effects);
	ASpell (ASpell const &old_obj);
	//ASpell &operator=(ASpell const &rhs);
	~ASpell(void);
	virtual ASpell *clone() const = 0;
	// members functions //
	std::string		getName(void) const;
	std::string		getEffects(void) const;

protected:
	std::string		_name;
	std::string		_effects;

};

#endif