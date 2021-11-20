#include <iostream>

// Classes look like structures, but their members can also be function names
// And optimally access specifiers
// There are 3 access specifiers:
// private: members of a class are accessible only from within other members
// 	of the same class (or from their "friends")
// protected: members are accessible from other members of the same class
//	(or from their "friends"), but also from members of their derived class
// public: members are accessible from anywhere where the object is visible
//
// By default if an access specifier is not used, the member is private
class class_name
{
	// access_specifier:
		// member1;
}	object_names;

class Rectangle
{
	int width, height; // these have private access level by default
	public:
		void set_values (int, int); // only declaration, not definition
		// Not treated as an inline function
		int area (void); // only declaration, not definition
		// This is treated as an inline function
		int circumference (void) { return (2 * (width + height)); }
};

// Side note: can also use 'struct' instead of 'class', the only difference
// is that by default struct have public members and class have private ones.

// Define a function that is a member of the class Rectangle outside of the
// class itself
// The scope operator is used to say this is not a regular non-member function
// definition.
void Rectangle::set_values (int x, int y)
{
	// have private access rights in this function for the Rectangle class
	width = x;
	height = y;
}

int	Rectangle::area (void)
{
	return (width * height);
}

int main()
{
	Rectangle rect;
	rect.set_values(4, 5);
	int area = rect.area();
	std::cout << "area: " << area << '\n';
}