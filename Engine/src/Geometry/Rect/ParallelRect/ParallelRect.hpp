#ifndef PARALLELRECT_HPP
#define PARALLELRECT_HPP

#include "../iRect.hpp"
#include "../../iParallel.hpp"

namespace geom {
	template<AXIS axis>
	struct ParallelRect : iRect, iParallel<axis>
	{

	};
}

#endif // !PARALLELRECT_HPP