#ifndef PHYSICSMODEL_HPP
#define PHYSICSMODEL_HPP

class PhysicsModel {
public:
	PhysicsModel(short colliderLayer, bool isFreezed = false);

	/* Getters& Setters */

	void colliderLayer(short value);
	short colliderLayer() const;

	void freezed(bool value);
	bool freezed() const;

	// Main method to run physics
	virtual void run();
protected:
	short colliderLayer_;
	bool isFreezed_; // make object absolutely static
};

#endif // !IPHYSICSMODEL_HPP