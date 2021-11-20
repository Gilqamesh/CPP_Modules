#ifndef SCREEN_HPP
# define SCREEN_HPP

# include <iostream>
# include <vector>
# include <string>

class Screen;

class Window_mgr
{
	public:
		using ScreenIndex = std::vector<Screen>::size_type;
		void	clear(ScreenIndex);
		ScreenIndex	addScreen(const Screen &);
	private:
		std::vector<Screen> screens = { Screen(24, 80, ' ') };
};

class Screen
{
	friend void	Window_mgr::clear(ScreenIndex);
	public:
		using	pos = std::string::size_type;
		Screen() = default;
		Screen(int h = 0, int w = 0): height(h), width(w), contents(h * w, ' ') { }
		Screen(int h, int w, char c): height(h), width(w), contents(h * w, c) { }
		Screen	&move(pos, pos);
		char	get() const;
		char	get(pos, pos) const;
		Screen	&set(char);
		Screen	&set(pos, pos, char);
		Screen	&display(std::ostream &os = std::cout) { do_display(os); return *this; };
		const Screen	&display(std::ostream &os = std::cout) const { do_display(os); return *this; };
	private:
		pos	cursor = 0;
		pos	height = 0, width = 0;
		std::string	contents;
		void	do_display(std::ostream &) const;
};

#endif
