#include "../Geometry/Shape/iShape.hpp"

#ifndef PHYSICSMODEL_HPP
#define PHYSICSMODEL_HPP

class PhysicsModel {
public:
	PhysicsModel(geom::iShape& shape, short colliderLayer, bool isFreezed = false);

	/* Getters& Setters */

	void shape(geom::iShape& value);
	geom::iShape& shape() const;

	void colliderLayer(short value);
	short colliderLayer() const;

	void freezed(bool value);
	bool freezed() const;

	// Main method to run physics
	virtual void run();
protected:
	geom::iShape** shape_;
	short colliderLayer_;
	bool isFreezed_; // make object absolutely static
};

#endif // !IPHYSICSMODEL_HPP