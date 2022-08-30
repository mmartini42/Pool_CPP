// Copyright (c) 2022 mathmart <mathmart@42lyon.fr>.

//
// Created by mathis martini on 30/08/2022.
//

#ifndef CPP_POOL_FIXED_HPP
#define CPP_POOL_FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

class Fixed {
private:
	static int const	_fractionalBitsNb;

	int					_rawBits;

public:
	Fixed();
	Fixed(int const &intNb);
	Fixed(float const &floatNb);
	Fixed(Fixed const &src);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed	&operator=(Fixed const &other);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &other);

#endif //CPP_POOL_FIXED_HPP
