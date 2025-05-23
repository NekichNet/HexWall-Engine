#include "Line.hpp"

geom::Line::Line(const Vector& vector)
{
	fromVector(vector);
}

const geom::Line& geom::Line::set(const Point& start, const Point& end)
{
	start_ = start;
	end_ = end;
}

const geom::Line& geom::Line::start(const Point& point)
{
	start_ = point;
}

const geom::Point& geom::Line::start() const
{
	return start_;
}

const geom::Line& geom::Line::end(const Point& point)
{
	end_ = point;
}

const geom::Point& geom::Line::end() const
{
	return end_;
}

void geom::Line::reverse()
{
	Point temp = start_;
	start_ = end_;
	end_ = temp;
}

const geom::Line & geom::Line::reversed() const
{
	return *(new geom::Line(end_, start_));
}

const geom::Vector& geom::Line::toVector(bool head_to_first=false) const
{
	return *(new geom::Vector(*this, head_to_first));
}

void geom::Line::fromVector(const Vector& vector)
{
	start_ = Point(0, 0, 0, 0);
	end_ = vector.toPoint();
}
