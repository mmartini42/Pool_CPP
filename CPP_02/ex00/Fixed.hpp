// Copyright (c) 2022 mathmart <mathmart@42lyon.fr>.

//
// Created by mathis martini on 30/08/2022.
//

#ifndef CPP_POOL_FIXED_HPP
#define CPP_POOL_FIXED_HPP

#include <iostream>
#include <iomanip>


class Fixed {
private:
	int		_rawBits;
	static int const _fractionalBitsNb = 8;

public:
	Fixed();
	Fixed(Fixed const &src); // COPY
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed	&operator=(Fixed const &other);
};


#endif //CPP_POOL_FIXED_HPP
