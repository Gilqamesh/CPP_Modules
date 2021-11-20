#include "Point.hpp"

Point::Point(): x(0), y(0) { }

Point::Point(const Fixed fp1, const Fixed fp2): x(fp1), y(fp2) { }

Point::~Point() { }

Point::Point(const Point &p): x(p.get_x()), y(p.get_y()) { }

Fixed	Point::get_x(void) const
{
	return (x);
}

Fixed	Point::get_y(void) const
{
	return (y);
}
