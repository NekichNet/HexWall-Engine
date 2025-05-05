#ifndef HEXAGON_HPP
#define HEXAGON_HPP

#include "../Point/Point.hpp"

namespace geom {
	struct Hexagon
	{
	public:
		Hexagon(const Point& point,
			unsigned radius, unsigned height) :
			point_(point), radius_(radius), height_(height) {}
		Hexagon(int x, int y, int z, int q,
			unsigned radius, unsigned height) :
			point_(x, y, z, q), radius_(radius), height_(height) {}
		
		const Point& point();
		void point(const Point& point);
		unsigned radius();
		void radius(unsigned value);
		unsigned height();
		void height(unsigned value);
	private:
		Point point_;
		unsigned int radius_, height_;
	};
}

#endif // !HEXAGON_HPP