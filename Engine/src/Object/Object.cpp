#include "Object.hpp"

void Object::shape(geom::iShape& value)			{ shape_ = &value; }
geom::iShape& Object::shape() const				{ return *shape_; }

void Object::physicsModel(PhysicsModel& value)	{ physicsModel_ = &value; }
PhysicsModel& Object::physicsModel() const		{ return *physicsModel_; }