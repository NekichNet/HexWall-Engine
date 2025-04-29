#ifndef CLOSEST_HPP
#define CLOSEST_HPP

#include "../Line/Line.hpp"
#include "../Vector/Vector.hpp"
#include "../Point/Point.hpp"
#include "../Sphere/Sphere.hpp"
#include "../Cylinder/Cylinder.hpp"
#include "../Rect/Rect.hpp"

namespace geom {
	Line closest(const Point& first, const Line& second);
	Line closest(const Point& first, const Sphere& second);
	Line closest(const Point& first, const Cylinder& second);
	Line closest(const Point& first, const Rect& second);

	Line closest(const Line& first, const Line& second);
	Line closest(const Line& first, const Sphere& second);
	Line closest(const Line& first, const Cylinder& second);
	Line closest(const Line& first, const Rect& second);

	Line closest(const Sphere& first, const Sphere& second);
	Line closest(const Sphere& first, const Cylinder& second);
	Line closest(const Sphere& first, const Rect& second);

	Line closest(const Cylinder& first, const Cylinder& second);
	Line closest(const Cylinder& first, const Rect& second);

	Line closest(const Rect& first, const Rect& second);
}

#endif // !CLOSEST_HPP