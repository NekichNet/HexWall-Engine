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
	fromLine(line, head_to_start);
}

geom::Vector& geom::Vector::cord(AXIS axis, int value) {
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

geom::Vector& geom::Vector::x(int value)	{ x_ = value; }
int geom::Vector::x() const		{ return x_; }

geom::Vector& geom::Vector::y(int value)	{ y_ = value; }
int geom::Vector::y() const		{ return y_; }

geom::Vector& geom::Vector::z(int value)	{ z_ = value; }
int geom::Vector::z() const		{ return z_; }

geom::Vector& geom::Vector::q(int value) { q_ = value; }
int geom::Vector::q() const { return q_; }

geom::Line geom::Vector::toLine() const
{
	return Line(*this);
}

geom::Point geom::Vector::toPoint() const
{
	return Point(x_, y_, z_, q_);
}

void geom::Vector::fromLine(const Line& line, bool head_to_start = false)
{
	Point start = head_to_start ? line.end() : line.start();
	Point end = head_to_start ? line.start() : line.end();
	x_ = end.x() - start.x();
	y_ = end.y() - start.y();
	z_ = end.z() - start.z();
	q_ = end.q() - start.q();
}

void geom::Vector::fromPoint(const Point& point)
{
	x_ = point.x();
	y_ = point.y();
	z_ = point.z();
	q_ = point.q();
}

geom::Vector& geom::Vector::length(unsigned int value)
{
	float coef = value / length();
	x_ *= coef;
	y_ *= coef;
	z_ *= coef;
	q_ *= coef;
	return *this;
}

unsigned int geom::Vector::length() const
{
	return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(q_, 2));
}

geom::Vector& geom::Vector::operator=(const Vector& other)
{
	x_ = other.x_;
	y_ = other.y_;
	z_ = other.z_;
	q_ = other.q_;
	return *this;
}

geom::Vector& geom::Vector::operator=(Vector&& other) noexcept
{
	x_ = other.x_;
	y_ = other.y_;
	z_ = other.z_;
	q_ = other.q_;
	return *this;
}

geom::Vector geom::operator+(const Vector& a, const Vector& b)
{
	return Vector(a.x_ + b.x_, a.y_ + b.y_, a.z_ + b.z_, a.q_ + b.q_);
}

geom::Vector geom::operator-(const Vector& a, const Vector& b)
{
	return Vector(a.x_ - b.x_, a.y_ - b.y_, a.z_ - b.z_, a.q_ - b.q_);
}

geom::Vector geom::operator*(const Vector& a, const Vector& b)
{
	return Vector(a.x_ * b.x_, a.y_ * b.y_, a.z_ * b.z_, a.q_ * b.q_);
}

geom::Vector geom::operator*(const Vector& a, float b)
{
	return Vector(a.x_ * b, a.y_ * b, a.z_ * b, a.q_ * b);
}

geom::Vector geom::operator/(const Vector& a, const Vector& b)
{
	return Vector(a.x_ / b.x_, a.y_ / b.y_, a.z_ / b.z_, a.q_ / b.q_);
}

geom::Vector geom::operator/(const Vector& a, float b)
{
	return Vector(a.x_ / b, a.y_ / b, a.z_ / b, a.q_ / b);
}

geom::Vector& geom::Vector::operator+=(const Vector& other)
{
	x_ += other.x_;
	y_ += other.y_;
	z_ += other.z_;
	q_ += other.q_;
	return *this;
}

geom::Vector& geom::Vector::operator-=(const Vector& other)
{
	x_ -= other.x_;
	y_ -= other.y_;
	z_ -= other.z_;
	q_ -= other.q_;
	return *this;
}

geom::Vector& geom::Vector::operator*=(const Vector& other)
{
	x_ *= other.x_;
	y_ *= other.y_;
	z_ *= other.z_;
	q_ *= other.q_;
	return *this;
}

geom::Vector& geom::Vector::operator*=(float other)
{
	x_ *= other;
	y_ *= other;
	z_ *= other;
	q_ *= other;
	return *this;
}

geom::Vector& geom::Vector::operator/=(const Vector& other)
{
	x_ /= other.x_;
	y_ /= other.y_;
	z_ /= other.z_;
	q_ /= other.q_;
	return *this;
}

geom::Vector& geom::Vector::operator/=(float other)
{
	x_ /= other;
	y_ /= other;
	z_ /= other;
	q_ /= other;
	return *this;
}
