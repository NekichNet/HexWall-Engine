#ifndef STRAIGHT_HPP
#define STRAIGHT_HPP

#include "../iLine.hpp"
#include "../../Vector/Vector.hpp"
#include "../../Point/Point.hpp"

namespace geom {
	struct Straight : iLine
	{
	public:
		Straight(const Point& start, const Point& end)
			: start_(start), end_(end) {}
	private:
		Point start_, end_;
	};
}

#endif // !STRAIGHT_HPP