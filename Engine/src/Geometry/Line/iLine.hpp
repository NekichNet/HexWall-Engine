#ifndef ILINE_HPP
#define ILINE_HPP

#include "../Point/Point.hpp"
#include "../Vector/Vector.hpp"

namespace geom {
	struct iLine {
	public:
		void set(const Point& start, const Point& end);
		void start(const Point& point);
		const Point& start() const;
		void end(const Point& point);
		const Point& end() const;
		
		void reverse();
		iLine reversed();

		Vector toVector(bool head_to_start=false) const;
	};
}

#endif // !ILINE_HPP