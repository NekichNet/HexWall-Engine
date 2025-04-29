#ifndef RECT_HPP
#define RECT_HPP

#include <array>

#include "../Point/Point.hpp"

namespace geom {
	struct Rect
	{
	public:
		Rect(const std::array<Point, 3>& points) : points_(points) {}
		Rect(const Point& point1, const Point& point2, const Point& point3) :
			points_(*(new std::array<Point, 3> {point1, point2, point3})) {}

		const std::array<Point, 3>& points() const;
		void points(const std::array<Point, 3>& points);
	private:
		std::array<Point, 3> points_;
	};
}

#endif // !RECT_HPP