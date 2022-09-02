// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "../inc/Cat.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

Cat::Cat() : Animal() {
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(std::string const name) : Animal(name) {
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(const Cat &src) {
	*this = src;
	std::cout << "Copy constructeur of cat has been called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Constructor Cat has been killed" << std::endl;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

Cat		&Cat::operator=(const Cat &f) {
	this->type = f.type;
	return (*this);
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

void	Cat::makeSound() const {
	std::cout << "Miaou say cat" << std::endl;
}