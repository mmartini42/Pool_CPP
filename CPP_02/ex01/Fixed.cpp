// Copyright (c) 2022 mathmart <mathmart@42lyon.fr>.

//
// Created by mathis martini on 30/08/2022.
//

#include "Fixed.hpp"

int const	Fixed::_fractionalBitsNb = 8;

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int &intNb) : _rawBits(intNb << _fractionalBitsNb){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &floatNb) : _rawBits(roundf(floatNb * (1 << _fractionalBitsNb))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called " << std::endl;
	_rawBits = other._rawBits;
	return (*this);
}

int		Fixed::getRawBits() const {
	return _rawBits;
}

void	Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

float	Fixed::toFloat() const {
	return ((float)_rawBits / (1 << _fractionalBitsNb));
}

int		Fixed::toInt() const {
	return (_rawBits >> _fractionalBitsNb);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &other) {
	os << other.toFloat();
	return os;
}