#ifndef POINT_HPP
#define POINT_HPP

#include "../Vector/Vector.hpp"

namespace geom {
	struct Point
	{
	public:
		Point(int x, int y, int z, int q)
			: x_(x), y_(y), z_(z), q_(q) {};

		int cord(AXIS axis);
		void cord(AXIS axis, unsigned int value);
		void x(int value);
		int x() const;
		void y(int value);
		int y() const;
		void z(int value);
		int z() const;
		void q(int value);
		int q() const;

		const Vector& toVector();

		void copy(const Point& other);
		void copy(Point&& other);
		unsigned int getDistance(const Point& obj) const;
		unsigned int getDistance(const Line& obj) const;
		const Vector& getRelative(const Point& obj) const;
		const Vector& getRelative(const Line& obj) const;
		const Point& createRelative(const Vector& vector) const;
		const Point& createRelative(float angle, unsigned int distance) const;
	private:
		int x_, y_, z_, q_;
	};
}

#endif // !POINT_HPP