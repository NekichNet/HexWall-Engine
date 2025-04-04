#ifndef ISHAPE_HPP
#define ISHAPE_HPP

#include "../Point/iPoint.hpp"
#include "../Vector3d/Vector3d.hpp"

namespace geom {
	struct iShape {
	public:
		virtual int getVolume() const = 0;
		virtual int getArea() const = 0;
		virtual std::vector<iPoint> getPoints() const = 0;
		virtual std::vector<Vector3d> getRelative(iPoint) const = 0;
		virtual iPoint getMassCentre() const = 0;
	};
}

#endif //ISHAPE_HPP