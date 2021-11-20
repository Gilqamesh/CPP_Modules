#include <iostream>

// Overloadable operators:
// +    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
// <<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
// ~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
// delete    new[]     delete[]
// Operators are overloaded using operator functions, syntax:
// type operator sign (parameters) { /*... body ...*/ }

class CVector
{
	public:
		int x, y;
		CVector () {};
		CVector (int a, int b) : x(a), y(b) {}
		CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param)
{
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

int main()
{
	CVector foo (3, 1);
	CVector bar (1, 2);
	CVector result;
	result = foo + bar;
	// same
	// result = foo.operator+ (bar);
	std::cout << "result is: " << result.x << ", " << result.y << '\n';
}
