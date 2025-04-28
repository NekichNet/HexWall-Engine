#include "Line.hpp"

void geom::Line::set(const Point& start, const Point& end)
{
	start_ = start;
	end_ = end;
}

void geom::Line::start(const Point& point)
{
	start_ = point;
}

const geom::Point& geom::Line::start() const
{
	return start_;
}

void geom::Line::end(const Point& point)
{
	end_ = point;
}

const geom::Point& geom::Line::end() const
{
	return end_;
}

const geom::Vector& geom::Line::toVector(bool head_to_first=false) const
{
	return *(new geom::Vector(*this, head_to_first));
}
