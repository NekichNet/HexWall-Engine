#include <vector>
#include <string>
#include "../Geometry/Vector3d/Vector3d.hpp"
#include "../Geometry/Shape/iShape.hpp"
#include "../PhysicsModel/PhysicsModel.hpp"
#include "../Effect/iEffect.hpp"

#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
public:
	// ToDo: constructors and sprites for objects

	/* Getters & Setters */

	void shape(geom::iShape& value);
	geom::iShape& shape() const;

	void physicsModel(PhysicsModel& value);
	PhysicsModel& physicsModel() const;

	void addEffect(iEffect effect);
	void removeEffect(std::string effectName);
	void removeEffect(unsigned short index);
	const std::vector<iEffect> getEffects() const;

	void runEffect(std::string effectName);
	void runEffect(unsigned short index);
	void runEffectOnce(iEffect effect);
	void runEffects(
		std::vector<std::string> ignore = std::vector<std::string>());

protected:
	geom::iShape* shape_; // shape object type
	PhysicsModel* physicsModel_; // physics calculation strategy
	std::vector<iEffect> effects_; // list of effects, currently applied
};

#endif // !OBJECT_HPP