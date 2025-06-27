#ifndef INERTIALOBJECT_HPP
#define INERTIALOBJECT_HPP

#include <vector>

#include "../PhysicsObject.hpp"
#include "../../Geometry/Vector/Vector.hpp"
#include "../../Geometry/Hexagon/Hexagon.hpp"

class InertialObject : PhysicsObject
{
public:
	/* Getters & Setters & Appliers */

	void mass(int value);
	int mass();

	geom::Vector applyForce(geom::Vector force);
	void force(geom::Vector value);
	geom::Vector force();

	virtual void run();
protected:
	int mass_;
	geom::Vector forces_; // acceleration = this.mass_ * this.forces_
};

#endif // !INERTIALOBJECT_HPP