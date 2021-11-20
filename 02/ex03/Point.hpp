#ifndef POINT_HPP
# define POINT_HPP

// ************************************************************************** //
//                               Point Class                                  //
// ************************************************************************** //

# include "Fixed.hpp"

class Point
{
	friend bool	bsp(Point const, Point const, Point const, Point const);
	public:
		Point();	// Default constructor
		Point(const Fixed, const Fixed);	// Constructor with two Fixed params
		Point(const Point &); // Copy constructor
		~Point();	// Destructor
		Fixed get_x(void) const;	// Returns 'x'
		Fixed get_y(void) const;	// Returns 'y'
	private:
		Point &operator=(const Point &);	// Copy-assignment operator
		Fixed const	x;
		Fixed const	y;
};

// 'a', 'b' and 'c' are vertices to a triangle
// Returns true if 'point' is inside the triangle, false if 'point' is outside or
// part of the perimeter of the triangle.
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif /* POINT_HPP */
