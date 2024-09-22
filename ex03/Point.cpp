#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &point)
{
	if (this != &point)
	{
		(Fixed)x = (Fixed)point.x;
		(Fixed)y = (Fixed)point.y;
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}