#include "Vector.hpp"

void geom::Vector::cord(AXIS axis, int value) {
	switch (axis) {
	case geom::AXIS::X:
		x_ = value; break;
	case geom::AXIS::Y:
		y_ = value; break;
	case geom::AXIS::Z:
		z_ = value; break;
	}
}

int geom::Vector::cord(AXIS axis) const
{
	switch (axis) {
	case geom::AXIS::X:
		return x_;
	case geom::AXIS::Y:
		return y_;
	case geom::AXIS::Z:
		return z_;
	}
}

void geom::Vector::x(int value)	{ x_ = value; }
int geom::Vector::x() const		{ return x_; }

void geom::Vector::y(int value)	{ y_ = value; }
int geom::Vector::y() const		{ return y_; }

void geom::Vector::z(int value)	{ z_ = value; }
int geom::Vector::z() const		{ return z_; }

void geom::Vector::q(int value) { q_ = value; }
int geom::Vector::q() const { return q_; }

const Point& geom::Vector::toPoint() const
{
	return new Point(x_, y_, z_, q_);
}

const geom::Vector& geom::operator+(const Vector& a, const Vector& b)
{ return geom::Vector(a.x_ + b.x_, a.y_ + b.y_, a.z_ + b.z_); }
