// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "../inc/Animal.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

Animal::Animal() : type("Unknown") {
	std::cout << "Constructor Animal has been called" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << "Animal copy constructor has been called" << std::endl;
}

Animal::Animal(std::string witch) {
	this->type = witch;
	std::cout << "Constructor Animal has been called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal has been destroyed" << std::endl;
}

/* **************************************************************************** */
/*									Getter										*/
/* **************************************************************************** */

std::string		Animal::getType() const {
	return this->type;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

Animal& Animal::operator=(const Animal &f) {
	this->type = f.type;
	return *this;
}

std::ostream	&operator<<( std::ostream &os, Animal const &f ) {
	os << "{type : " << f.getType() << " }" << std::endl;
	return os;
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

void	Animal::makeSound() const {
	std::cout << "Animal make a sound" << std::endl;
}


