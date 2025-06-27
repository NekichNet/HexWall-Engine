#ifndef PHYSICSOBJECT_HPP
#define PHYSICSOBJECT_HPP

#include <memory>
#include <vector>

#include "../Geometry/Hexagon/Hexagon.hpp"

class PhysicsObject {
public:
	PhysicsObject(geom::Hexagon& colliderBox, bool isFreezed = false)
		: colliderBox_(colliderBox), isFreezed_(isFreezed) {}

	/* Getters & Setters */
	void freezed(bool value);
	bool freezed() const;

	geom::Hexagon& colliderBox();

	// Method to receive and return force to other objects
	virtual geom::Vector applyForce(geom::Vector force);

	// Main method to run physics
	virtual void run();

protected:
	geom::Hexagon colliderBox_;
	bool isFreezed_; // make object's physics unrunnable.
	// ToDo: Sprite visibility
};

#endif // !PHYSICSOBJECT_HPP