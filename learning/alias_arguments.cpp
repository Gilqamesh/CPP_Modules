#include <iostream>
#include <string>

// Function creates local copies of 'a' and 'b'
std::string	concatenate(std::string a, std::string b)
{
	a = "hi";
	b = "there";
	return (a + b);
}

// Function takes in references to 'a' and 'b', creates no overhead therefore
// and also changes the original values of 'a' and 'b'
std::string concatenate2(std::string &a, std::string &b)
{
	a = "hi";
	b = "there";
	return (a + b);
}

// Takes in the parameters as references, but because of the const qualifier,
// the original values of 'a' and 'b' remains unchanged
std::string concatenate3(const std::string &a, const std::string &b)
{
	// Error
	// a = "hi";
	// b = "there";
	return (a + b);
}

int main()
{
	std::string str1 ("hello"), str2 ("world"), str3 ("hello"), str4("world");
	concatenate(str1, str2);
	concatenate2(str3, str4);
	std::cout << str1 << str2 << str3 << str4 << std::endl;
	concatenate3(str1, str2);
	std::cout << str1 << str2 << std::endl;
}
