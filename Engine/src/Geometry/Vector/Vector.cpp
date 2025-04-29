#include "Vector.hpp"
#include <cmath>

geom::Vector::Vector(const Point& point)
{
	x_ = point.x();
	y_ = point.y();
	z_ = point.z();
	q_ = point.q();
}

geom::Vector::Vector(const Point& start, const Point& end)
{
	x_ = end.x() - start.x();
	y_ = end.y() - start.y();
	z_ = end.z() - start.z();
	q_ = end.q() - start.q();
}

geom::Vector::Vector(const Line& line, bool head_to_start)
{
	Point start = head_to_start ? line.end() : line.start();
	Point end = head_to_start ? line.start() : line.end();
	x_ = end.x() - start.x();
	y_ = end.y() - start.y();
	z_ = end.z() - start.z();
	q_ = end.q() - start.q();
}

const geom::Vector& geom::Vector::cord(AXIS axis, int value) {
	switch (axis) {
	case geom::AXIS::X:
		x_ = value; break;
	case geom::AXIS::Y:
		y_ = value; break;
	case geom::AXIS::Z:
		z_ = value; break;
	case geom::AXIS::Q:
		q_ = value; break;
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
	case geom::AXIS::Q:
		return q_;
	}
}

const geom::Vector& geom::Vector::x(int value)	{ x_ = value; }
int geom::Vector::x() const		{ return x_; }

const geom::Vector& geom::Vector::y(int value)	{ y_ = value; }
int geom::Vector::y() const		{ return y_; }

const geom::Vector& geom::Vector::z(int value)	{ z_ = value; }
int geom::Vector::z() const		{ return z_; }

const geom::Vector& geom::Vector::q(int value) { q_ = value; }
int geom::Vector::q() const { return q_; }

const geom::Point& geom::Vector::toPoint() const
{
	return *(new Point(x_, y_, z_, q_));
}

const geom::Vector& geom::Vector::distance(unsigned int value)
{
	float coef = value / distance();
	x_ *= coef;
	y_ *= coef;
	z_ *= coef;
	q_ *= coef;
}

unsigned int geom::Vector::distance() const
{
	return std::abs(x_) + std::abs(y_) + std::abs(z_) + std::abs(q_);
}

const geom::Vector& geom::operator+(const Vector& a, const Vector& b)
{
	return *(new geom::Vector(a.x_ + b.x_, a.y_ + b.y_, a.z_ + b.z_, a.q_ + b.q_));
}
