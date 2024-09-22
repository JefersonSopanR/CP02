#include "Point.hpp"

float area(const Point a, const Point b, const Point c)
{
	return abs(a.getX().getRawBits() * (b.getY().getRawBits() - c.getY().getRawBits()) +
			   b.getX().getRawBits() * (c.getY().getRawBits() - a.getY().getRawBits()) +
			   c.getX().getRawBits() * (a.getY().getRawBits() - b.getY().getRawBits())) / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area(a, b, c);
	float A1 = area(point, b, c);
	float A2 = area(a, point, c);
	float A3 = area(a, b, point);

	return (A == A1 + A2 + A3);
}