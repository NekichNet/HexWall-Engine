#ifndef LINE_HPP
#define LINE_HPP

#include "../iLine.hpp"
#include "../../Vector/Vector.hpp"
#include "../../Point/Point.hpp"

namespace geom {
	struct Line : iLine
	{
	public:
		Line(const Point& start, const Point& end)
			: start_(start), end_(end) {}

		void set(const Point& start, const Point& end);
		void start(const Point& point);
		const Point& start() const;
		void end(const Point& point);
		const Point& end() const;

		void reverse();
		iLine reversed();

		const Vector& toVector(bool head_to_start=false) const;
	private:
		Point start_, end_;
	};
}

#endif // !LINE_HPP