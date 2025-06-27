#ifndef HEXAGON_HPP
#define HEXAGON_HPP

#include "../Point/Point.hpp"
#include "../Vector/Vector.hpp"

namespace geom {
	struct Hexagon
	{
	public:
		Hexagon(const Point& point,
			unsigned xsize, unsigned ysize, unsigned zsize, unsigned qsize) :
			point_(point),
			xSize_(xsize), ySize_(ysize), zSize_(zsize), qSize_(qsize) {}
		Hexagon(int x, int y, int z, int q,
			unsigned xsize, unsigned ysize, unsigned zsize, unsigned qsize) :
			point_(x, y, z, q),
			xSize_(xsize), ySize_(ysize), zSize_(zsize), qSize_(qsize) {}
		
		Point& point();
		void point(const Point& point);
		unsigned xSize();
		void xSize(unsigned value);
		unsigned ySize();
		void ySize(unsigned value);
		unsigned zSize();
		void zSize(unsigned value);
		unsigned qSize();
		void qSize(unsigned value);

		bool contains(const Point& point) const;

		bool overlaps(const Hexagon& other) const;
		bool overlapsOnWay(const Vector& vector, const Hexagon& other) const;

	private:
		Point point_;
		unsigned int xSize_, ySize_, zSize_, qSize_;
	};
}

#endif // !HEXAGON_HPP