#ifndef IPOINT_HPP
#define IPOINT_HPP

#include <vector>

#include "../Axis3d.hpp"
#include "../Shape/iShape.hpp"
#include "../Vector3d/Vector3d.hpp"
#include "../Line/iLine.hpp"

namespace geom {
	struct iPoint {
	public:
		virtual int getCord(AXIS3D axis) = 0;
		virtual void setCord(AXIS3D axis, unsigned int value) = 0;
		virtual void setCords(const iPoint& other) = 0;
		virtual void setCords(iPoint&& other) = 0;

		virtual unsigned int getDistance(iPoint obj) const = 0;
		virtual unsigned int getDistance(iShape obj) const = 0;
		virtual unsigned int getDistance(iLine obj) const = 0;

		virtual const Vector3d& getRelative(iPoint obj) const = 0;
		virtual const Vector3d& getRelative(iShape obj) const = 0;
		virtual const Vector3d& getRelative(iLine obj) const = 0;

		virtual const iPoint& createRelative(Vector3d vector) const = 0;
		virtual const iPoint& createRelative(
			float angle, unsigned int distance) const = 0;
	};
}

#endif // !IPOINT_HPP
