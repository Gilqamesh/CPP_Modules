#include "Point.hpp"

/*
** Source: https://www.gamedev.net/forums/topic.asp?topic_id=295943
** Checks which side is p1 on compared to the line between p2 and p3
*/
static Fixed	sign(const Point &p1, const Point &p2, const Point &p3)
{
	return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())
		- (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	b1, b2, b3;

	Fixed	side1(sign(point, a, b));
	Fixed	side2(sign(point, b, c));
	Fixed	side3(sign(point, c, a));

	if (side1 == 0 || side2 == 0 || side3 == 0) // Point is on the perimeter
		return (false);
	b1 = side1 < Fixed();
	b2 = side2 < Fixed();
	b3 = side3 < Fixed();
	return ((b1 == b2) && (b2 == b3));
}
