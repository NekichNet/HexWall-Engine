#ifndef LINE_HPP
#define LINE_HPP

#include "../Vector/Vector.hpp"
#include "../Point/Point.hpp"

namespace HexGeometry {
	struct Line
	{
	public:
		Line(const Point& start, const Point& end)
			: _start(start), _end(end) {}
		Line(const Vector& vector);

		Line& set(const Point& start, const Point& end);
		Line& start(const Point& point);
		Point start() const;
		Line& end(const Point& point);
		Point end() const;

		void reverse();
		Line reversed() const;

		Vector toVector(bool head_to_start=false) const;
		void fromVector(const Vector& vector);

		// unsigned int length() const;
	private:
		Point _start, _end;
	};
}

#endif // !LINE_HPP