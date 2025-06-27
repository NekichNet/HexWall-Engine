#include "PhysicsObject.hpp"

void PhysicsObject::freezed(bool value)			{ isFreezed_ = value; }
bool PhysicsObject::freezed() const				{ return isFreezed_; }

geom::Hexagon& PhysicsObject::colliderBox()		{ return colliderBox_; }
