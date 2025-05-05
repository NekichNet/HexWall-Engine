#ifndef COMPLETELY_PHYSICAL_HPP
#define COMPLETELY_PHYSICAL_HPP

#include "../PhysicsModel.hpp"
#include "../../Geometry/Vector/Vector.hpp"
#include "../../Geometry/Point/Point.hpp"

class CompletelyPhysical : PhysicsModel
{
	/* Getters & Setters & Appliers */

	void moveBy(geom::Vector value);

	void mass(int value);
	int mass();

	void applyForce(geom::Vector force);
	void force(geom::Vector value);
	geom::Vector force();
private:
	int mass_;
	geom::Point centerPoint_;
	geom::Vector forces_; // acceleration = this.mass_ * this.forces_
};

#endif // !COMPLETELY_PHYSICAL_HPP