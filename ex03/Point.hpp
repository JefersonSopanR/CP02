#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
	
public:
	Point();
	Point(const Point &point);
	Point(const float x, const float y);
	~Point();
	
	Point &operator=(const Point &point);
	
	Fixed getX(void) const;
	Fixed getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif