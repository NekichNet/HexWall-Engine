#include "Point.hpp"

int geom::Point::cord(AXIS axis)
{
    switch (axis) {
    case geom::AXIS::X:
        return x_;
    case geom::AXIS::Y:
        return y_;
    case geom::AXIS::Z:
        return z_;
    }
}

void geom::Point::cord(AXIS axis, unsigned int value)
{
    switch (axis) {
    case geom::AXIS::X:
        x_ = value; break;
    case geom::AXIS::Y:
        y_ = value; break;
    case geom::AXIS::Z:
        z_ = value; break;
    }
}