//
// Created by mathis martini on 20/09/2022.
//

#ifndef EASY_SPAN_HPP
#define EASY_SPAN_HPP


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <climits>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_vector;

public:
	Span();
	Span(unsigned int N);
	Span(Span const &src) {*this = src;};
	virtual ~Span() {};

	Span	&operator=(Span const &src);

	std::vector<int> const	&getVector() const {return _vector;};

	void	addNumber(int nb);
	void	addNumber(std::vector<int> vec);

	int		shortestSpan();
	int		longestSpan();

	class SpanFullException : public std::exception {
	public:
		SpanFullException() {};
		virtual ~SpanFullException() throw() {};
		virtual const char	*what() const throw() { return "Span is full."; };
	};

	class SpanTooSmallException : public std::exception {
	public:
		SpanTooSmallException() {};
		virtual ~SpanTooSmallException() throw() {};
		virtual const char	*what() const throw() { return "Span is empty or contains only one value."; };
	};
};
std::ostream	&operator<<(std::ostream &o, Span &src);


#endif //EASY_SPAN_HPP
