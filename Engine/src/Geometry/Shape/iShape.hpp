#include "../Point/iPoint.hpp"

#ifndef ISHAPE_HPP
#define ISHAPE_HPP

namespace geom {
	struct iShape {
	public:
		virtual int getVolume() const = 0;
		virtual int getArea() const = 0;
		virtual std::vector<geom::iPoint> getPoints() const = 0;
	};
}

#endif //ISHAPE_HPP