#include "Hexagon.hpp"
#include "math.h"

geom::Point& geom::Hexagon::point()
{
    return point_;
}

void geom::Hexagon::point(const Point& point)
{
    point_ = point;
}

unsigned geom::Hexagon::xSize()
{
    return xSize_;
}

void geom::Hexagon::xSize(unsigned value)
{
    xSize_ = value;
}

unsigned geom::Hexagon::ySize()
{
    return ySize_;
}

void geom::Hexagon::ySize(unsigned value)
{
    ySize_ = value;
}

unsigned geom::Hexagon::zSize()
{
    return zSize_;
}

void geom::Hexagon::zSize(unsigned value)
{
    zSize_ = value;
}

unsigned geom::Hexagon::qSize()
{
    return qSize_;
}

void geom::Hexagon::qSize(unsigned value)
{
    qSize_ = value;
}

bool geom::Hexagon::contains(const Point& point) const
{
    return abs(point.x() - point_.x()) <= xSize_ / 2 ||
        abs(point.y() - point_.y()) <= ySize_ / 2 ||
        abs(point.z() - point_.z()) <= zSize_ / 2 ||
        abs(point.q() - point_.q()) <= qSize_ / 2;
}

bool geom::Hexagon::overlaps(const Hexagon& other) const
{
    return abs(other.point_.x() - point_.x()) <= (xSize_ + other.xSize_) / 2 ||
        abs(other.point_.y() - point_.y()) <= (ySize_ + other.ySize_) / 2 ||
        abs(other.point_.z() - point_.z()) <= (zSize_ + other.zSize_) / 2 ||
        abs(other.point_.q() - point_.q()) <= (qSize_ + other.qSize_) / 2;
}

bool geom::Hexagon::overlapsOnWay(const Vector& vector, const Hexagon& other) const
{
    return abs(other.point_.x() - point_.x()) <= vector.x() + (xSize_ / 2) + (other.xSize_ / 2) ||
        abs(other.point_.y() - point_.y()) <= vector.y() + (ySize_ / 2) + (other.ySize_ / 2) ||
        abs(other.point_.z() - point_.z()) <= vector.z() + (zSize_ / 2) + (other.zSize_ / 2) ||
        abs(other.point_.q() - point_.q()) <= vector.q() + (qSize_ / 2) + (other.qSize_ / 2);
}
