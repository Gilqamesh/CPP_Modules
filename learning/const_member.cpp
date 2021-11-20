#include <iostream>

class MyClass
{
	int x;
	public:
		MyClass (int val) : x(val) {}
		const int& get() const { return x; }
		// This is accessible from both a const and non-const object
		void printClass() const { std::cout << "Print from const\n"; }
		// This is not accessible from a const object of the class
		void printClass() { std::cout << "Print from non-const\n"; }
};

// Inside this function arg is a const, so the only way to access its elements
// is if they are specified as const as well.
void print(const MyClass &arg)
{
	std::cout << arg.get() << '\n';
	arg.printClass();
}

int main()
{
	MyClass a(3);
	print(a);
	a.printClass();
}
