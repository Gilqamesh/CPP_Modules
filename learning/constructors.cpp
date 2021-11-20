#include <iostream>
#include <new>

// A constructor in essence is a special function that is called whenever
// a new object of the class is created/instantiated.
// Useful to avoid uninitialized values in the class.
class Rectangle
{
	int width, height;
	public:
		Rectangle (int, int); // constructor declaration
		// Constructors can be overloaded as well.
		Rectangle (); // This will be a default constructor and is used when
			// the object is created but is not initialized with any arguments
		Rectangle (int a) { width = a; height = a; }
		int area () { return (width * height); }
};

// Member initialization in a constructor
class PolygonMesh
{
	Rectangle rect;
	int numberOfSides;
	public:
		// before the constructor's body ':' then a list of initializations for
		// class members. In this case first we have to initialize rect, by
		// calling rect's constructor.
		// If they are not initialized after the colon, they are
		// default constructed. So if a class does not have a default
		// constructor, we have to initialize members in the initialization list
		PolygonMesh (int n) : rect ( n + 1 ) { numberOfSides = n; }
};

// Constructor definition, cannot be called, it is only called once when the
// object is created.
// These functions don't have a return value or type.
Rectangle::Rectangle (int a, int b)
{
	width = a;
	height = b;
}

Rectangle::Rectangle ()
{
	width = 5;
	height = 5;
}

int main()
{
	Rectangle rect (4, 5);
	std::cout << rect.area() << '\n';
	Rectangle rect2;
	// Wrong, default constructor is not called
	// This is because this would be the same as a function declaration
	// Rectangle rect3 ();
	std::cout << rect2.area() << '\n';

	// Other syntax:
	// Functional form of initializing.
	Rectangle rect3 (2, 4);
	// Constructor with a single parameter can be initialized like this:
	Rectangle rect4 = 3;
	// using -std=c++11 flag
	// Rectangle rect5 {2, 4};
	// Advantage is that these braces can be used to explicitely call the
	// default constructor as they cant be confused with function declarations
	// Rectangle rect6 {};

	Rectangle *rptr;
	rptr = new Rectangle;
	if (rptr == nullptr)
	{
		std::cout << "Failed to allocate memory\n";
		exit(EXIT_FAILURE);
	}
	std::cout << rptr->area() << '\n';
	delete rptr;
}