#include "Point.hpp"

int main()
{
	Point a(0, 0);
	Point b(10, 30);
	Point c (20, 0);

	//inside:
	Point point(10, 10);
	Point point2(5, 5);
	Point point3(15, 5);
	Point point4(10, 20);
	Point point5(10, 0);

	//outside:
	Point point6(10, 40);
	Point point7(10, -10);
	Point point8(30, 10);
	Point point9(0, 10);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;

	return 0;
}