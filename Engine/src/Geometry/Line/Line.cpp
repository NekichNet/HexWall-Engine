#include "Line.hpp"

void geom::Line::set(const Point& first, const Point& second)
{
	first_ = first;
	second_ = second;
}

void geom::Line::first(const Point& point)
{
	first_ = point;
}

const geom::Point& geom::Line::first() const
{
	return first_;
}

void geom::Line::second(const Point& point)
{
	second_ = point;
}

const geom::Point& geom::Line::second() const
{
	return second_;
}

geom::Vector geom::Line::toVector(bool head_to_first) const
{
	return geom::Vector();
}
