#include "Rect.hpp"

const std::array<geom::Point, 3>& geom::Rect::points() const
{
    return points_;
}
