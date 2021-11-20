#include <iostream>

int operate(int a, int b)
{
	return (a + b);
}

// At least one of the parameters has to be a different type if we want to
// create multiple instances of functions with the same name for the purpose of
// overload.
double operate(double a, double b)
{
	return (a * b);
}

double operate(int a)
{
	return (a + 1);
}

// If a function name has multiple instances for different types BUT has
// the same function definition (body), it makes sense to use:
// Function template
template <class mytype>
mytype sum(mytype a, mytype b)
{
	return (a + b);
}
// To call this function: sum<type>(arguments)

int main(void)
{
	std::cout << operate(1) << '\n' << operate(2.3, 0.4) << '\n' << operate(3)
		<< '\n' << operate(2, 3) << '\n';
	std::cout << sum<double>(5.4, 1.2) << '\n';
	std::cout << sum<int>(2, -3) << '\n';
	std::cout << sum<std::string>("Hello ", "World") << '\n';
}
