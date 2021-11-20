#include <iostream>
#include <stdexcept>

int main()
{
	int a, b;
	while (std::cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw std::runtime_error("Can't divide by 0");
			std::cout << a / b << std::endl;
		}
		catch(std::runtime_error err)
		{
			std::cout << err.what() << std::endl;
			std::cout << "Try again? Enter n to exit\n";
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n')
				break ;
		}
	}
}