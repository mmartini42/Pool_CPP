// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 12/09/2022.
//

#ifndef TEMPLATE_WHATEVER_HPP
#define TEMPLATE_WHATEVER_HPP

template<typename T>
void	swap( T& a, T& b ) {
	T c;

	c = a;
	a = b;
	b = c;
}

template<typename T>
const T&	min( const T& a, const T& b ) {
	return (a >= b) ? b : a;
}

template<typename T>
const T&	max( const T& a, const T& b ) {
	return (a >= b) ? a : b;
}

#endif //TEMPLATE_WHATEVER_HPP
