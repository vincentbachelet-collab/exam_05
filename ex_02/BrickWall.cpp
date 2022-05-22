#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{
}

ATarget *BrickWall::clone() const
{
    return (new BrickWall());
}

BrickWall::~BrickWall(void)
{
}