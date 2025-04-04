#ifndef ILINE_HPP
#define ILINE_HPP

#include "../Vector3d/Vector3d.hpp"
#include "../Point/iPoint.hpp"

namespace geom {
	struct iLine {
	public:
		virtual std::pair<iPoint, iPoint> getPoints() const = 0;
		virtual iPoint getFirst() const = 0;
		virtual iPoint getSecond() const = 0;
		virtual iPoint getPoint(float portion) const = 0;

		virtual void setPoints(std::pair<iPoint, iPoint> points) = 0;
		virtual void setFirst(iPoint point) = 0;
		virtual void setSecond(iPoint point) = 0;

		virtual unsigned int getLength() const = 0;

		virtual Vector3d toVector() const = 0;
	};
}

#endif // !ILINE_HPP