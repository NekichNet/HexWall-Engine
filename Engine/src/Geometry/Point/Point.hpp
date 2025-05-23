#ifndef POINT_HPP
#define POINT_HPP

#include "../Vector/Vector.hpp"

namespace geom {
	struct Point
	{
	public:
		Point() : x_(0), y_(0), z_(0), q_(0) {}
		Point(int x, int y, int z, int q)
			: x_(x), y_(y), z_(z), q_(q) {};

		const Point& cord(AXIS axis, unsigned int value);
		int cord(AXIS axis);
		const Point& x(int value);
		int x() const;
		const Point& y(int value);
		int y() const;
		const Point& z(int value);
		int z() const;
		const Point& q(int value);
		int q() const;

		const Vector& toVector() const;

		void fromVector(const Vector& obj);

		unsigned int getDistance(const Point& obj) const;
		unsigned int getDistanceHorizontal(const Point& obj) const;
		const Vector& getRelative(const Point& obj) const;
		const Point& createRelative(const Vector& vector) const;
	private:
		int x_, y_, z_, q_;
	};
}

#endif // !POINT_HPP