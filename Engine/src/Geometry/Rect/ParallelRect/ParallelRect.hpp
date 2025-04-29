#ifndef PARALLELRECT_HPP
#define PARALLELRECT_HPP

#include "../Rect.hpp"
#include "../../iParallel.hpp"

namespace geom {
	template<AXIS axis>
	struct ParallelRect : Rect, iParallel<axis>
	{

	};
}

#endif // !PARALLELRECT_HPP