#include <iostream>
#include "Point.hpp"
#define X_MIN 3
#define X_MAX 21
#define Y_MIN 2
#define Y_MAX 11

static Fixed myrand(int range)
{ 
	return (Fixed(std::rand() % (100 * range) / 100.0f));
}

// https://imgur.com/a/Yge54SI
// Tester: https://planetcalc.com/8108/
int main( void )
{
	Point	a(Fixed(3.4f), Fixed(5.6f));
	Point	b(Fixed(20), Fixed(10.2f));
	Point	c(Fixed(12), Fixed(2.3f));

	std::cout << "Triangle points: A(3.4, 5.6), B(20, 10.2), C(12, 2.3)\n" << std::endl;
	std::cout << "Test point\tCORRECT : MINE" << std::endl;
	std::cout << "P(7, 3)\t\tOutside : " << (bsp(a, b, c, Point(Fixed(7), Fixed(3)))
		? "Inside" : "Outside") << std::endl;
	std::cout << "P(20, 10.2)\tOutside : " << (bsp(a, b, c, Point(Fixed(20), Fixed(10.2f)))
		? "Inside" : "Outside") << std::endl;
	std::cout << "P(10, 4)\tInside  : " << (bsp(a, b, c, Point(Fixed(10), Fixed(4)))
		? "Inside" : "Outside") << std::endl;
	std::cout << "P(10.2, 3.01)\tInside  : " << (bsp(a, b, c, Point(Fixed(10.2f), Fixed(3.01f)))
		? "Inside" : "Outside") << std::endl;
	std::cout << "P(19, 14)\tOutside : " << (bsp(a, b, c, Point(Fixed(19), Fixed(14)))
		? "Inside" : "Outside") << std::endl;
	std::cout << "P(19, 9.8)\tInside  : " << (bsp(a, b, c, Point(Fixed(19), Fixed(9.8f)))
		? "Inside" : "Outside") << std::endl;
	// for (int i = 0; i < 1000; ++i)
	// {
	// 	// Generate random numbers
	// 	Point	ra(myrand(X_MAX - X_MIN), myrand(Y_MAX - Y_MIN));
	// 	std::cout << "Text(\"" << (bsp(a, b, c, ra) ? "I" : "O") << "\", ("
	// 		<< ra.get_x() << ", " << ra.get_y() << "))" << std::endl;
	// }
	return (0);
}
