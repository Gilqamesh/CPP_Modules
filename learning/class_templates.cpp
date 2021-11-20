#include <iostream>

// To initialize this class as an int type for it's members:
// mypair<int> myobject (2, 5)
template <class T>
class mypair
{
	T a, b;
	public:
		mypair (T first, T second) : a(first), b(second) { }
		T getmax ();
};

// The function with template parameter as its type can also be defined outside
// of the class like this:
template <class T>
T mypair<T>::getmax()
{
	if (a > b)
		return (a);
	return (b);
}

int main()
{
	mypair <int> myobject (3, 6);
	std::cout << myobject.getmax() << '\n';
	mypair <double> myobject2 (2.3, 9.34);
	std::cout << myobject2.getmax() << '\n';
}
