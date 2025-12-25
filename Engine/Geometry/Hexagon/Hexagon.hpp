#ifndef HEXAGON_HPP
#define HEXAGON_HPP

#include "../Point/Point.hpp"

namespace HexGeometry {
	struct Hexagon {
	public:
		Hexagon(const Point& center = Point(), unsigned int height = 1u, unsigned int size = 1u)
			: _center(center), _height(height), _xSize(size), _zSize(size), _qSize(size) {}

		Hexagon(const Hexagon& other)
			: _center(other._center), _height(other._height), _xSize(other._xSize), _zSize(other._zSize), _qSize(other._qSize) {}
		Hexagon(Hexagon&& other)
			: _center(other._center), _height(other._height), _xSize(other._xSize), _zSize(other._zSize), _qSize(other._qSize) {}


	private:
		Point _center;
		unsigned int _height, _xSize, _zSize, _qSize;
	};
}

#endif // !HEXAGON_HPP