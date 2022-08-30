//
// Created by mathis martini on 30/08/2022.
//

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void	Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called " << std::endl;
	_rawBits = other._rawBits;
	return (*this);
}