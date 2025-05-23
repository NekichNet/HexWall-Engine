#include "Hexagon.hpp"

const geom::Point& geom::Hexagon::point()
{
    return point_;
}

void geom::Hexagon::point(const Point& point)
{
    point_ = point;
}

unsigned geom::Hexagon::xSize()
{
    return xsize_;
}

void geom::Hexagon::xSize(unsigned value)
{
    xsize_ = value;
}

unsigned geom::Hexagon::ySize()
{
    return ysize_;
}

void geom::Hexagon::ySize(unsigned value)
{
    ysize_ = value;
}

unsigned geom::Hexagon::zSize()
{
    return zsize_;
}

void geom::Hexagon::zSize(unsigned value)
{
    zsize_ = value;
}

unsigned geom::Hexagon::qSize()
{
    return qsize_;
}

void geom::Hexagon::qSize(unsigned value)
{
    qsize_ = value;
}
