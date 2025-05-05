#include "Hexagon.hpp"

const geom::Point& geom::Hexagon::point()
{
    return point_;
}

void geom::Hexagon::point(const Point& point)
{
    point_ = point;
}

unsigned geom::Hexagon::radius()
{
    return radius_;
}

void geom::Hexagon::radius(unsigned value)
{
    radius_ = value;
}

unsigned geom::Hexagon::height()
{
    return height_;
}

void geom::Hexagon::height(unsigned value)
{
    height_ = value;
}
