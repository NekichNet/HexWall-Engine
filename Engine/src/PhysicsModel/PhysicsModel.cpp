#include "PhysicsModel.hpp"

PhysicsModel::PhysicsModel(geom::iShape& shape, short colliderLayer, bool isFreezed = false) {
	this->shape(shape);
	this->colliderLayer(colliderLayer);
	this->freezed(isFreezed);
}

void PhysicsModel::shape(geom::iShape& value)	{ *shape_ = &value; }
geom::iShape& PhysicsModel::shape() const		{ return **shape_; }

void PhysicsModel::colliderLayer(short value)	{ colliderLayer_ = value; }
short PhysicsModel::colliderLayer() const		{ return colliderLayer_; }

void PhysicsModel::freezed(bool value)			{ isFreezed_ = value; }
bool PhysicsModel::freezed() const				{ return isFreezed_; }
