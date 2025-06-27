#include "InertialObject.hpp"

void InertialObject::mass(int value)
{
	mass_ = value;
}

int InertialObject::mass()
{
	return mass_;
}
