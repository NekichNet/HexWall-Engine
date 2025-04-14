#ifndef LINE_HPP
#define LINE_HPP

#include "../Vector/Vector.hpp"
#include "../Point/Point.hpp"

namespace geom {
	struct Line
	{
	public:
		void set(const Point& first, const Point& second);
		void first(const Point& point);
		const Point& first() const;
		void second(const Point& point);
		const Point& second() const;

		int length() const;
		Vector toVector(bool head_to_first) const;

		Line(const Point& first, const Point& second)
			: first_(first), second_(second) {}
	private:
		Point first_, second_;
	};
}

#endif // !LINE_HPP