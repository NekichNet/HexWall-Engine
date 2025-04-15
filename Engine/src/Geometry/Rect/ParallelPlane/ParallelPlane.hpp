#ifndef PARALLELPLANE_HPP
#define PARALLELPLANE_HPP

#include "../iRect.hpp"
#include "../../iEndless.hpp"
#include "../../iParallel.hpp"

namespace geom {
	template<AXIS axis>
	struct ParallelPlane : iRect, iEndless, iParallel<axis>
	{

	};
}

#endif // !PARALLELPLANE_HPP