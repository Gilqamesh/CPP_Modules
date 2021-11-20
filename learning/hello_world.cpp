#include <iostream>
#include <string>

// Using this declaration it allows us to have visibility over the namespace std
// And so we can use the object's unqualified name under the scope of the
// declaration.
// using namespace std;

int	main(void)
{
	// Without 'using namespace std'
	std::cout << "Hello world\n";
	std::cout << 123 << std::endl;
	std::cout << -23.234987927391 << std::endl;
	std::cout << 1.0 / 3 << std::endl;
	// cout << "Hello world" << endl;
	std::string str1 = "Initialization 1";
	std::string str2 ("Initialization 2");
	// string str3 {"Initialization 3"}; // needs -std=c++11 flag
}
