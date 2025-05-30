#include <vector>
#include <string>
#include "../Geometry/Vector/Vector.hpp"
#include "../PhysicsModel/PhysicsModel.hpp"
#include "../State/iState.hpp"

#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
public:
	// ToDo: constructors and sprites for objects

	/* Getters & Setters */

	void physicsModel(PhysicsModel& value);
	PhysicsModel& physicsModel() const;

	void addState(iState state);
	void removeState(std::string stateName);
	void removeState(unsigned short index);
	const std::vector<iState> getStates() const;

	void runState(std::string stateName);
	void runState(unsigned short index);
	void runStateOnce(iState state);
	void runStates(
		std::vector<std::string> ignore = std::vector<std::string>());

protected:
	PhysicsModel* physicsModel_; // physics calculation strategy
	std::vector<iState> states_; // list of effects, currently applied
};

#endif // !OBJECT_HPP