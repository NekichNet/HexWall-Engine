#include "Line.hpp"
#include <cmath>

geom::Line::Line(const Vector& vector)
{
	fromVector(vector);
}

geom::Line& geom::Line::set(const Point& start, const Point& end)
{
	start_ = start;
	end_ = end;
}

geom::Line& geom::Line::start(const Point& point)
{
	start_ = point;
}

geom::Point geom::Line::start() const
{
	return start_;
}

geom::Line& geom::Line::end(const Point& point)
{
	end_ = point;
}

geom::Point geom::Line::end() const
{
	return end_;
}

void geom::Line::reverse()
{
	Point temp = start_;
	start_ = end_;
	end_ = temp;
}

geom::Line geom::Line::reversed() const
{
	return geom::Line(end_, start_);
}

geom::Vector geom::Line::toVector(bool head_to_first=false) const
{
	return geom::Vector(*this, head_to_first);
}

void geom::Line::fromVector(const Vector& vector)
{
	start_ = Point(0, 0, 0, 0);
	end_ = vector.toPoint();
}

unsigned int geom::Line::length() const
{
	return sqrt(pow(end_.x() - start_.x(), 2)
		+ pow(end_.y() - start_.y(), 2)
		+ pow(end_.z() - start_.z(), 2)
		+ pow(end_.q() - start_.q(), 2));
}