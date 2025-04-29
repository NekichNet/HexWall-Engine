#include "Closest.hpp"

geom::Line geom::closest(const Point& first, const Sphere& second)
{
	return Line(Vector(first, second.point()).distance(first.getDistance(second.point()) - second.radius()));
}