// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 02/09/2022.
//

#include "../inc/WrongAnimal.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

WrongAnimal::WrongAnimal() : _wrongType("WrongUnknown") {
	std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
	std::cout << "WrongAnimal is copied" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name) {
	this->_wrongType = name;
	std::cout << "Wrong animal is created " + name << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal has destroyed" << std::endl;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

WrongAnimal		&WrongAnimal::operator=(const WrongAnimal &f) {
	this->_wrongType = f._wrongType;
	return *this;
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal try to speak !" << std::endl;
}

std::string		WrongAnimal::getWrongType() const {
	return this->_wrongType;
}
