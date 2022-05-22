#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
#pragma once
#include "ATarget.hpp"

class BrickWall : public ATarget {
public :
	BrickWall();
	virtual ATarget *clone() const; // permet de subsituer la class abstrait et creer une class
	virtual ~BrickWall(void);
	//members functions;
};

#endif