#include "../PhysicsModel.hpp"
#include "../../Geometry/Vector3d/Vector3d.hpp"
#include "../../Geometry/Point/Point3d/Point3d.hpp"

#ifndef COMPLETELY_PHYSICAL_HPP
#define COMPLETELY_PHYSICAL_HPP

class CompletelyPhysical : PhysicsModel
{
	/* Getters & Setters & Appliers */

	void moveBy(geom::Vector3d value);

	void mass(int value);
	int mass();

	void applyForce(geom::Vector3d force);
	void force(geom::Vector3d value);
	geom::Vector3d force();
private:
	int mass_;
	geom::Point3d centerPoint_;
	geom::Vector3d forces_; // acceleration = this.mass_ * this.forces_
};

#endif // !COMPLETELY_PHYSICAL_HPP