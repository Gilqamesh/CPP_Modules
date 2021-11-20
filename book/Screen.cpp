#include "Screen.hpp"

// Screen implementations

inline
Screen	&Screen::move(pos r, pos c)
{
	cursor = r * width + c;
	return (*this);
}

inline
Screen	&Screen::set(char c)
{
	contents[cursor] = c;
	return (*this);
}

inline
Screen	&Screen::set(pos r, pos col, char c)
{
	contents[r * width + col] = c;
	return (*this);
}

inline
char	Screen::get() const
{
	return (contents[cursor]);
}

inline
char	Screen::get(pos r, pos c) const
{
	return (contents[r * width + c]);
}

inline
void	Screen::do_display(std::ostream &os) const
{
	for (pos i = 0; i != contents.size(); ++i)
	{
		os << contents[i];
		if (i + 1 != contents.size() && (i + 1) % width == 0)
			os << '\n';
	}
}

// Window_mgr implementations

inline
void	Window_mgr::clear(ScreenIndex i)
{
	Screen	&s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

inline
Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s)
{
	screens.push_back(s);
	return (screens.size() - 1);
}
