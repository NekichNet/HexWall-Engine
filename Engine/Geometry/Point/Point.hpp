#ifndef POINT_HPP
#define POINT_HPP

#include "../Vector/Vector.hpp"

namespace HexGeometry {
	struct Point
	{
	public:
		Point()
			: _x(0), _y(0), _z(0), _q(0) {}

		Point(const Point& other)
			: _x(other._x), _y(other._y), _z(other._z), _q(other._q) {}
		Point(Point&& other)
			: _x(other._x), _y(other._y), _z(other._z), _q(other._q) {}

		Point& operator=(const Point& other);
		Point& operator=(Point&& other) noexcept;

		Point& cord(AXIS axis, int value);
		Point& moveCord(AXIS axis, int value);
		int cord(AXIS axis) const;

		Point& x(int value);
		Point& moveX(int value);
		int x() const;

		Point& y(int value);
		Point& moveY(int value);
		int y() const;

		Point& z(int value);
		Point& moveZ(int value);
		int z() const;

		Point& q(int value);
		Point& moveQ(int value);
		int q() const;

		Point& moveByVector(const Vector& vector);

		// int getDistance(const Point& obj) const;
		// int getDistanceHorizontal(const Point& obj) const;
		Vector& getRelative(const Point& obj) const;
		Point& createRelative(const Vector& vector) const;
	private:
		int _x, _y, _z, _q;
	};
}

#endif // !POINT_HPP