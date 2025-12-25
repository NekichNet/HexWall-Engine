#include <cmath>

#include "Vector.hpp"

namespace hg = HexGeometry;

hg::Vector::Vector(const Point& point)
{
	_x = point.x();
	_y = point.y();
	_z = point.z();
	_q = point.q();
}

hg::Vector::Vector(const Point& start, const Point& end)
{
	_x = end.x() - start.x();
	_y = end.y() - start.y();
	_z = end.z() - start.z();
	_q = end.q() - start.q();
}

hg::Vector::Vector(const Line& line, bool head_to_start)
{
	fromLine(line, head_to_start);
}

hg::Vector& hg::Vector::cord(AXIS axis, int value) {
	switch (axis) {
	case hg::AXIS::X:
		x(value); break;
	case hg::AXIS::Y:
		y(value); break;
	case hg::AXIS::Z:
		z(value); break;
	case hg::AXIS::Q:
		q(value); break;
	}
}
hg::Vector& hg::Vector::moveCord(AXIS axis, int value)
{
	switch (axis) {
	case hg::AXIS::X:
		moveX(value); break;
	case hg::AXIS::Y:
		moveY(value); break;
	case hg::AXIS::Z:
		moveZ(value); break;
	case hg::AXIS::Q:
		moveQ(value); break;
	}
}
int hg::Vector::cord(AXIS axis) const
{
	switch (axis) {
	case hg::AXIS::X:
		return _x;
	case hg::AXIS::Y:
		return _y;
	case hg::AXIS::Z:
		return _z;
	case hg::AXIS::Q:
		return _q;
	}
}

hg::Vector& hg::Vector::x(int value)
{
	_z += abs(_x - value) / 2;
	_q -= abs(_x - value) / 2;
	_x = value;
}
hg::Vector& hg::Vector::moveX(int value)
{
	_z += value / 2;
	_q -= value / 2;
	_x += value;
}
int hg::Vector::x() const { return _x; }

hg::Vector& hg::Vector::y(int value)
{
	_y = value;
}
hg::Vector& hg::Vector::moveY(int value)
{
	_y += value;
}
int hg::Vector::y() const { return _y; }

hg::Vector& hg::Vector::z(int value)
{
	_x += abs(_z - value) / 2;
	_q += abs(_z - value) / 2;
	_z = value;
}
hg::Vector& hg::Vector::moveZ(int value)
{
	_x += value / 2;
	_q += value / 2;
	_z += value;
}
int hg::Vector::z() const { return _z; }

hg::Vector& hg::Vector::q(int value)
{
	_x -= abs(_z - value) / 2;
	_z += abs(_z - value) / 2;
	_q = value;
}
hg::Vector& hg::Vector::moveQ(int value)
{
	_x -= value / 2;
	_z += value / 2;
	_q = value;
}
int hg::Vector::q() const { return _q; }

hg::Line hg::Vector::toLine() const
{
	return Line(*this);
}

hg::Point hg::Vector::toPoint() const
{
	return Point().x(_x).y(_y).z(_z);
}

void hg::Vector::fromLine(const Line& line, bool head_to_start = false)
{
	Point start = head_to_start ? line.end() : line.start();
	Point end = head_to_start ? line.start() : line.end();
	_x = end.x() - start.x();
	_y = end.y() - start.y();
	_z = end.z() - start.z();
	_q = end.q() - start.q();
}

void hg::Vector::fromPoint(const Point& point)
{
	_x = point.x();
	_y = point.y();
	_z = point.z();
	_q = point.q();
}

/*
hg::Vector& hg::Vector::length(unsigned int value)
{
	float coef = value / length();
	_x *= coef;
	_y *= coef;
	_z *= coef;
	_q *= coef;
	return *this;
}
*/

/*
unsigned int hg::Vector::length() const
{
	
}
*/

hg::Vector& hg::Vector::operator=(const Vector& other)
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
	_q = other._q;
	return *this;
}

hg::Vector& hg::Vector::operator=(Vector&& other) noexcept
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
	_q = other._q;
	return *this;
}

hg::Vector hg::operator+(const Vector& a, const Vector& b)
{
	return Vector().x(a._x + b._x).y(a._y + b._y).z(a._z + b._z).q(a._q + b._q);
}

hg::Vector hg::operator-(const Vector& a, const Vector& b)
{
	return Vector().x(a._x - b._x).y(a._y - b._y).z(a._z - b._z).q(a._q - b._q);
}

hg::Vector hg::operator*(const Vector& a, const Vector& b)
{
	return Vector().x(a._x * b._x).y(a._y * b._y).z(a._z * b._z).q(a._q * b._q);
}

hg::Vector hg::operator*(const Vector& a, float b)
{
	return Vector().x(a._x * b).y(a._y * b).z(a._z * b).q(a._q * b);
}

hg::Vector hg::operator/(const Vector& a, const Vector& b)
{
	return Vector().x(a._x / b._x).y(a._y / b._y).z(a._z / b._z).q(a._q / b._q);
}

hg::Vector hg::operator/(const Vector& a, float b)
{
	return Vector().x(a._x / b).y(a._y / b).z(a._z / b).q(a._q / b);
}

hg::Vector& hg::Vector::operator+=(const Vector& other)
{
	_x += other._x;
	_y += other._y;
	_z += other._z;
	_q += other._q;
	return *this;
}

hg::Vector& hg::Vector::operator-=(const Vector& other)
{
	_x -= other._x;
	_y -= other._y;
	_z -= other._z;
	_q -= other._q;
	return *this;
}

hg::Vector& hg::Vector::operator*=(const Vector& other)
{
	_x *= other._x;
	_y *= other._y;
	_z *= other._z;
	_q *= other._q;
	return *this;
}

hg::Vector& hg::Vector::operator*=(float other)
{
	_x *= other;
	_y *= other;
	_z *= other;
	_q *= other;
	return *this;
}

hg::Vector& hg::Vector::operator/=(const Vector& other)
{
	_x /= other._x;
	_y /= other._y;
	_z /= other._z;
	_q /= other._q;
	return *this;
}

hg::Vector& hg::Vector::operator/=(float other)
{
	_x /= other;
	_y /= other;
	_z /= other;
	_q /= other;
	return *this;
}
