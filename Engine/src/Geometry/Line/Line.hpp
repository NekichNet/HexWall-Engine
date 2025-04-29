#ifndef LINE_HPP
#define LINE_HPP

#include "../Vector/Vector.hpp"
#include "../Point/Point.hpp"

namespace geom {
	struct Line
	{
	public:
		Line(const Point& start, const Point& end)
			: start_(start), end_(end) {}
		Line(const Vector& vector);

		const Line& set(const Point& start, const Point& end);
		const Line& start(const Point& point);
		const Point& start() const;
		const Line& end(const Point& point);
		const Point& end() const;

		const Line& reverse();
		const Line& reversed();

		const Vector& toVector(bool head_to_start=false) const;
		void fromVector(const Vector& vector);
	private:
		Point start_, end_;
	};
}

#endif // !LINE_HPP