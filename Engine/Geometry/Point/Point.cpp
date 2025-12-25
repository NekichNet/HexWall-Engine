#include <algorithm>

#include "Point.hpp"
#include "../../Math/Math.hpp"

namespace hg = HexGeometry;

hg::Point& hg::Point::operator=(const Point& other)
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
	_q = other._q;
	return *this;
}

hg::Point& hg::Point::operator=(Point&& other) noexcept
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
	_q = other._q;
	return *this;
}

hg::Point& hg::Point::cord(AXIS axis, int value)
{
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
	return *this;
}

hg::Point& hg::Point::moveCord(AXIS axis, int value)
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
	return *this;
}

int hg::Point::cord(AXIS axis) const
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

hg::Point& hg::Point::x(int value) {
	_z += abs(_x - value) / 2;
	_q -= abs(_x - value) / 2;
	_x = value;
	return *this;
}
hg::Point& hg::Point::moveX(int value)
{
	_z += value / 2;
	_q -= value / 2;
	_x += value;
	return *this;
}
int hg::Point::x() const { return _x; }

hg::Point& hg::Point::y(int value)
{
	_y = value;
	return *this;
}
hg::Point& hg::Point::moveY(int value)
{
	_y += value;
	return *this;
}
int hg::Point::y() const { return _y; }

hg::Point& hg::Point::z(int value)
{
	_x += abs(_z - value) / 2;
	_q += abs(_z - value) / 2;
	_z = value;
	return *this;
}
hg::Point & hg::Point::moveZ(int value)
{
	_x += value / 2;
	_q += value / 2;
	_z += value;
	return *this;
}
int hg::Point::z() const { return _z; }

hg::Point& hg::Point::q(int value)
{
	_x -= abs(_z - value) / 2;
	_z += abs(_z - value) / 2;
	_q = value;
	return *this;
}
hg::Point& hg::Point::moveQ(int value)
{
	_x -= value / 2;
	_z += value / 2;
	_q += value;
	return *this;
}
int hg::Point::q() const { return _q; }

hg::Point& hg::Point::moveByVector(const Vector& vector)
{
	_x += vector.x();
	_y += vector.y();
	_z += vector.z();
	_q += vector.q();
	return *this;
}

hg::Vector& hg::Point::getRelative(const Point& obj) const
{
	return (new Vector())->x(abs(obj._x - _x)).y(abs(obj._y - _y)).z(abs(obj._y - _y));
}

hg::Point& hg::Point::createRelative(const Vector& vector) const
{
	return (new Point())->x(_x + vector.x()).y(_y + vector.y()).z(_z + vector.z());
}
