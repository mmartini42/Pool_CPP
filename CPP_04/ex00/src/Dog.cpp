// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "../inc/Dog.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

Dog::Dog() : Animal() {
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(std::string name) : Animal(name) {
	std::cout << "Dog is created" << std::endl;
 }

Dog::Dog(const Dog &src) {
	*this = src;
	std::cout << "Dog is copied" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog has been killed" << std::endl;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

Dog		&Dog::operator=(const Dog &f) {
	this->type = f.type;
	return *this;
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

void	Dog::makeSound() const {
	std::cout << "Whoauf say the dog" << std::endl;
}