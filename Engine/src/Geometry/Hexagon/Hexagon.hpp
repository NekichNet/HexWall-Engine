#ifndef HEXAGON_HPP
#define HEXAGON_HPP

#include "../Point/Point.hpp"

namespace geom {
	struct Hexagon
	{
	public:
		Hexagon(const Point& point,
			unsigned xsize, unsigned ysize, unsigned zsize, unsigned qsize) :
			point_(point),
			xsize_(xsize), ysize_(ysize), zsize_(zsize), qsize_(qsize) {}
		Hexagon(int x, int y, int z, int q,
			unsigned xsize, unsigned ysize, unsigned zsize, unsigned qsize) :
			point_(x, y, z, q),
			xsize_(xsize), ysize_(ysize), zsize_(zsize), qsize_(qsize) {}
		
		const Point& point();
		void point(const Point& point);
		unsigned xSize();
		void xSize(unsigned value);
		unsigned ySize();
		void ySize(unsigned value);
		unsigned zSize();
		void zSize(unsigned value);
		unsigned qSize();
		void qSize(unsigned value);
	private:
		Point point_;
		unsigned int xsize_, ysize_, zsize_, qsize_;
	};
}

#endif // !HEXAGON_HPP