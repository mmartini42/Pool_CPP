// Copyright (c) 2022 mathmart <mathmart@42lyon.fr>.

//
// Created by mathis martini on 30/08/2022.
//

#include "Fixed.hpp"

int main(void) {

	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
