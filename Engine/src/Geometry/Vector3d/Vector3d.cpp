#include "Vector3d.hpp"

void geom::Vector3d::x(int value)	{ x_ = value; }
int geom::Vector3d::x() const		{ return x_; }

void geom::Vector3d::y(int value)	{ y_ = value; }
int geom::Vector3d::y() const		{ return y_; }

void geom::Vector3d::z(int value)	{ z_ = value; }
int geom::Vector3d::z() const		{ return z_; }

const geom::Vector3d& geom::operator+(const Vector3d& a, const Vector3d& b)
{ return geom::Vector3d(a.x_ + b.x_, a.y_ + b.y_, a.z_ + b.z_); }
