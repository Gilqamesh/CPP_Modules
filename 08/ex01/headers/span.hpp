#ifndef SPAN_HPP
# define SPAN_HPP

// ************************************************************************** //
//                               Span Class                                   //
// ************************************************************************** //

# include <vector>
# include <list>
# include <exception>
# include <iterator>
# include <iostream>

class Span
{
	public:
		Span(int);
		~Span();
		Span(const Span &);
		void addNumber(int);
		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			if (end - begin > maxSize - curSize)
				throw SpanOverflow();
			std::copy(begin, end, std::back_inserter(arr));
			std::sort(arr.begin(), arr.end());
			curSize += end - begin;
		}
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		unsigned int getCurSize(void) const;
		int &operator[](unsigned int);
	private:
		Span();
		Span &operator=(const Span &);
		std::vector<int>	arr;
		unsigned int		curSize;
		const unsigned int	maxSize;
	public:
		class SpanOverflow: public std::overflow_error
		{
			public:
				SpanOverflow();
				~SpanOverflow() throw();
				SpanOverflow(const SpanOverflow &);
		};
		class SpanUnderflow: public std::underflow_error
		{
			public:
				SpanUnderflow();
				~SpanUnderflow() throw();
				SpanUnderflow(const SpanUnderflow &);
		};
		class SpanRangeError: public std::range_error
		{
			public:
				SpanRangeError();
				~SpanRangeError() throw();
				SpanRangeError(const SpanRangeError &);
		};
};

std::ostream	&operator<<(std::ostream &, Span &);

#endif /* SPAN_HPP */
