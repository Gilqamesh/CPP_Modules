#include <iostream>

// The keyword this represents a pointer to the object whose member function is
// being executed. It is used within a class's member function to refer to the
// object itself.

class Dummy
{
	public:
		void isitme (Dummy &param);
};

void Dummy::isitme (Dummy &param)
{
	if (&param == this)
		std::cout << "Yes it is me\n";
	else
		std::cout << "No it is not me\n";
}

class CVector
{
	public:
		int x, y;
		CVector () { x = 0; y = 0; }
		CVector (int a, int b) : x(a), y(b) {}
		CVector& operator = (const CVector &param)
		{
			x = param.x;
			y = param.y;
			return *this;
		}
};

int main()
{
	Dummy a, b;
	a.isitme(a);
	a.isitme(b);
	b.isitme(a);
	b.isitme(b);
	CVector v1 (2, 5);
	CVector v2 (-2, 8);
	std::cout << "Before: " << v1.x << ", " << v1.y << '\n';
	v1 = v2;
	std::cout << "After: " << v1.x << ", " << v1.y << '\n';
}