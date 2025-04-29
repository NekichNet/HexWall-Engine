#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "../Point/Point.hpp"

namespace geom {
	struct Sphere
	{
	public:
		Sphere(Point point, unsigned int radius) :
			point_(point), radius_(radius) {}

		const Point& point() const;
		void point(const Point& value);
		unsigned int radius() const;
		void radius(unsigned int value);
	private:
		Point point_;
		unsigned int radius_;
	};
}

#endif // !SPHERE_HPP