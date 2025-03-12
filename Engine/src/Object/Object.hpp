#include <vector>
#include <string>
#include "../Geometry/Vector3d/Vector3d.hpp"
#include "../Effect/iEffect.hpp"

#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object {
public:
	// ToDo: constructors and sprites for objects

	/*
	* This going to be moved to physics body class!
	* 
	void moveBy(int x, int y, int z); // this.coords += args

	int& operator[](const char& axis) noexcept; // get or set coords
	const int& operator[](const char& axis) const noexcept;

	void mass(int value); // set mass of this object
	int mass(); // get mass of this object

	void applyForce(geom::Vector3d force); // this.force_ += force
	void force(geom::Vector3d value); // set force of this object
	geom::Vector3d force(); // get force of this object
	*/

	void colliderLayer(short value); // set collider layer of this object
	short colliderLayer(); // get collider layer of this object

	bool isPhysicsActive(); // check, if this object is being moved by physics rn

	void freezed(bool value); // freeze / unfreeze this object
	bool freezed(); // check, if this object is freezed

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
	/*
	* This going to be moved to physics body class!
	* 
	int x_, y_, z_, mass_;
	geom::Vector3d forces_; // acceleration = this.mass_ * this.forces_
	*/
	short colliderLayer_;
	bool isPhysicsActive_, // run physics only for objects moving at the moment
		isFreezed_; // disable ability to being moved by this.forces_
	std::vector<iEffect> effects_;
	// list of effects, currently applied on this object
};

#endif // !OBJECT_HPP