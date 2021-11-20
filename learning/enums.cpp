#include <iostream>

// C, type of each element is int
enum colors
{
	blue,
	red,
	yellow
};

// C++, typesafe, we can determine their types are 'enum'
enum class Colors
{
	black,
	orange,
	opal
};
// If we want to set a type to them:
// enum class Months : char {January, February, March, April, May, June};
// needs -std=c++11 flag

int main()
{

}