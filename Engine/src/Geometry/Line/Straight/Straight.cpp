#include "Straight.hpp"

void geom::Straight::set(const Point& first, const Point& second)
{
	first_ = first;
	second_ = second;
}

void geom::Straight::first(const Point& point)
{
	first_ = point;
}

const geom::Point& geom::Straight::first() const
{
	return first_;
}

void geom::Straight::second(const Point& point)
{
	second_ = point;
}

const geom::Point& geom::Straight::second() const
{
	return second_;
}

geom::Vector geom::Straight::toVector(bool head_to_first) const
{
	return geom::Vector();
}
