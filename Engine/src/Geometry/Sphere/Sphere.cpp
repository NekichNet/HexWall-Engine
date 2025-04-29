#include "Sphere.hpp"

const geom::Point & geom::Sphere::point() const
{
    return point_;
}

void geom::Sphere::point(const Point& value)
{
    point_ = value;
}

unsigned int geom::Sphere::radius() const
{
    return radius_;
}

void geom::Sphere::radius(unsigned int value)
{
    radius_ = value;
}
