// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "Cat.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

Cat::Cat() : Animal("Cat"), _brain(new Brain) {
	for (size_t i = 0; i < 100; i++)
		_brain->idea[i] = "Cat idea";
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(std::string const& name) : Animal(name) {
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal("Cat"), _brain(NULL) {
	*this = src;
	std::cout << "Copy constructeur of cat has been called" << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Constructor Cat has been killed" << std::endl;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

Cat		&Cat::operator=(const Cat &f) {
	if (_brain)
		delete _brain;
	_brain = new Brain;
	for (size_t i = 0; i < 100; i++)
		_brain->idea[i] = "Cat idea";
	this->type = f.type;
	return (*this);
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

Brain const	*Cat::getBrain() const {
	return _brain;
}

void	Cat::makeSound() const {
	std::cout << "Miaou say cat" << std::endl;
}