#include <cmath>

#include "Line.hpp"

namespace hg = HexGeometry;

hg::Line::Line(const Vector& vector)
{
	fromVector(vector);
}

hg::Line& hg::Line::set(const Point& start, const Point& end)
{
	_start = start;
	_end = end;
}

hg::Line& hg::Line::start(const Point& point)
{
	_start = point;
}

hg::Point hg::Line::start() const
{
	return _start;
}

hg::Line& hg::Line::end(const Point& point)
{
	_end = point;
}

hg::Point hg::Line::end() const
{
	return _end;
}

void hg::Line::reverse()
{
	Point temp = _start;
	_start = _end;
	_end = temp;
}

hg::Line hg::Line::reversed() const
{
	return hg::Line(_end, _start);
}

hg::Vector hg::Line::toVector(bool head_to_first=false) const
{
	return hg::Vector(*this, head_to_first);
}

void hg::Line::fromVector(const Vector& vector)
{
	_start = Point();
	_end = vector.toPoint();
}

/*
unsigned int hg::Line::length() const
{
	
}
*/