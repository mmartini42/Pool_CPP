// Copyright (c) 2022 mathmart <mathmart@42lyon.fr>.

//
// Created by mathis martini on 30/08/2022.
//

#include "Fixed.hpp"

int const	Fixed::_fractionalBitsNb = 8;

/* **************************************************************************** */
/*								Constructor / Destructor						*/
/* **************************************************************************** */

Fixed::Fixed() : _rawBits(0){
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Algo to fix point (intNb << _fractionalBitsNb)
Fixed::Fixed(const int &intNb) : _rawBits(intNb << _fractionalBitsNb){
	std::cout << "Int constructor called" << std::endl;
}

//Algo convert FixPoint to floatingPoint
Fixed::Fixed(const float &floatNb) : _rawBits(roundf(floatNb * (1 << _fractionalBitsNb))){
	std::cout << "Float constructor called" << std::endl;
}

/* **************************************************************************** */
/*								Return function									*/
/* **************************************************************************** */

int		Fixed::getRawBits() const {
	return this->_rawBits;
}

void	Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
}

float 	Fixed::toFloat() const {
	return ((float)(_rawBits / (1 << _fractionalBitsNb)));
}

int		Fixed::toInt() const {
	return (_rawBits >> _fractionalBitsNb);
}

/* **************************************************************************** */
/*									Operators									*/
/* **************************************************************************** */

Fixed	&Fixed::operator=(const Fixed &other){
	_rawBits = other.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &other) const {
	Fixed	temp;

	temp._rawBits = _rawBits + other.getRawBits();
	return (temp);
}

Fixed	Fixed::operator-(const Fixed &other) const {
	Fixed	temp;

	temp._rawBits = _rawBits - other.getRawBits();
	return (temp);
}

Fixed	Fixed::operator*(const Fixed &other) const{
	Fixed	temp;

	temp._rawBits = _rawBits * other._rawBits / (1 << _fractionalBitsNb);
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &other) const {
	Fixed	temp;

	temp._rawBits = _rawBits / other._rawBits * (1 << _fractionalBitsNb);
	return (temp);
}

Fixed	&Fixed::operator++() {
	_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;

	_rawBits++;
	return (temp);
}

Fixed	&Fixed::operator--() {
	_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;

	_rawBits--;
	return (temp);
}

/* **************************************************************************** */
/*									Boolean										*/
/* **************************************************************************** */

bool	Fixed::operator>(Fixed const &other) const {
	return (_rawBits > other._rawBits);
}

bool	Fixed::operator<(Fixed const &other) const {
	return (_rawBits < other._rawBits);
}

bool	Fixed::operator>=(Fixed const &other) const {
	return (_rawBits >= other._rawBits);
}

bool	Fixed::operator<=(Fixed const &other) const {
	return (_rawBits <= other._rawBits);
}

bool	Fixed::operator!=(Fixed const &other) const {
	return (_rawBits != other._rawBits);
}

bool	Fixed::operator==(Fixed const &other) const {
	return (_rawBits == other._rawBits);
}

/* **************************************************************************** */
/*									Min/Max										*/
/* **************************************************************************** */

Fixed		&Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 <= f2)
		return f1;
	return f2;
}

Fixed		&Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 >= f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1 <= f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1 >= f2)
		return f1;
	return f2;
}

/* **************************************************************************** */
/*									Ostream										*/
/* **************************************************************************** */

std::ostream	&operator<<(std::ostream &os, Fixed const &other) {
	os << other.toFloat();
	return os;
}