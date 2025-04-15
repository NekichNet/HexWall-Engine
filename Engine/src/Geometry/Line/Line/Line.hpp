#ifndef LINE_HPP
#define LINE_HPP

#include "../iLine.hpp"
#include "../../Vector/Vector.hpp"
#include "../../Point/Point.hpp"

namespace geom {
	struct Line : iLine
	{
	
	private:
		Point start_, end_;
	};
}

#endif // !LINE_HPP