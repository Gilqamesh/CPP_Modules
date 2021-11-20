#include <iostream>
#include <string>

class Screen
{
	public:
		typedef std::string::size_type pos;
		Screen() = default;
		Screen(int h, int w): height(h), width(w), contents(h * w, ' ') {}
		Screen(int h, int w, char c): height(h), width(w), contents(h * w, c) {}
	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
};