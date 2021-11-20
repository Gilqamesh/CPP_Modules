#include "span.hpp"
#include <algorithm>

Span::Span(int size): curSize(0), maxSize(size) { }

Span::~Span() { }

Span::Span(const Span &a): arr(a.arr), curSize(a.curSize), maxSize(a.maxSize) { }

void	Span::addNumber(int a)
{
	if (curSize == maxSize)
		throw SpanOverflow();
	++curSize;
	arr.insert(std::lower_bound(arr.cbegin(), arr.cend(), a), a);
}

static unsigned int myAbs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

unsigned int	Span::shortestSpan(void) const
{
	if (curSize < 2)
		throw SpanUnderflow();
	unsigned int	min = std::abs(arr[1] - arr[0]);
	for (unsigned int i = 1; i < curSize - 1; ++i)
		if (myAbs(arr[i + 1] - arr[i]) < min)
			min = myAbs(arr[i + 1] - arr[i]);
	return (min);
}

unsigned int	Span::longestSpan(void) const
{
	if (curSize < 2)
		throw SpanUnderflow();
	// return (std::max_element(arr.cbegin(), arr.cend())
	// 	- std::min_element(arr.cbegin(), arr.cend()));
	// Same solution
	std::pair<std::vector<int>::const_iterator, std::vector<int>::const_iterator> intPair
		= std::minmax_element(arr.cbegin(), arr.cend());
	return (*intPair.second - *intPair.first);
	// Only if arr is sorted
	// return (arr.back() - arr.front());
}

unsigned int	Span::getCurSize(void) const
{
	return (curSize);
}

int	&Span::operator[](unsigned int index)
{
	if (index < 0 || index >= curSize)
		throw SpanRangeError();
	return (arr[index]);
}

Span::SpanOverflow::SpanOverflow():
overflow_error("Span is full, cannot add more elements to it") { }

Span::SpanOverflow::~SpanOverflow() throw() { }

Span::SpanOverflow::SpanOverflow(const SpanOverflow &a):
overflow_error(a.what()) { }

Span::SpanUnderflow::SpanUnderflow():
underflow_error("Span does not have enough elements") { }

Span::SpanUnderflow::~SpanUnderflow() throw() { }

Span::SpanUnderflow::SpanUnderflow(const SpanUnderflow &a):
underflow_error(a.what()) { }

Span::SpanRangeError::SpanRangeError():
range_error("Index is out of range") { }

Span::SpanRangeError::~SpanRangeError() throw() { }

Span::SpanRangeError::SpanRangeError(const SpanRangeError &a):
range_error(a.what()) { }

std::ostream	&operator<<(std::ostream &os, Span &span)
{
	unsigned int	min = std::min(span.getCurSize(), (unsigned)40);
	for (unsigned int i = 0; i < min; ++i)
		os << span[i] << " ";
	if (min == 40)
		os << "...";
	os << std::endl;
	return (os);
}
