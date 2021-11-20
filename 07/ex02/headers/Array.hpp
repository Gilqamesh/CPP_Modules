#ifndef ARRAY_HPP
# define ARRAY_HPP

// ************************************************************************** //
//                                   Array Class                              //
// ************************************************************************** //

# include <new>
# include <iostream>
# include <exception>

// debugging
# define PRINT_HERE() (std::cout << "line: " << __LINE__ << std::endl)

template <typename T>
class Array
{
	public:
		typedef unsigned int size_type;
		Array(): array(nullptr), arrSize(0) { };
		Array(size_type n) try: array(new T[n]), arrSize(n) { }
		catch (std::bad_alloc &e)
		{
			std::cout << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
		~Array() { delete [] array; }
		Array(const Array &a): array(nullptr), arrSize(0) { *this = a; }
		Array &operator=(const Array &a)
		{
			if (this == &a)
				return (*this);
			delete [] array;
			try
			{
				array = new T[a.arrSize];
				arrSize = a.arrSize;
				for (size_type i = 0; i < arrSize; ++i)
					array[i] = a.array[i];
			}
			catch (std::bad_alloc &e)
			{
				std::cout << e.what() << std::endl;
				exit(EXIT_FAILURE);
			}
			return (*this);
		}
		T &operator[](size_type index)
		{
			if (array == nullptr || index >= arrSize)
				throw std::exception();
			return (array[index]);
		}
		size_type size() const { return (arrSize); }
	private:
		T				*array;
		size_type		arrSize;
};

#endif /* ARRAY_HPP */
