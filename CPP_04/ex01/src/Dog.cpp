// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#include "../inc/Dog.hpp"

/* **************************************************************************** */
/*							Constructor / Destructor							*/
/* **************************************************************************** */

Dog::Dog() : Animal("Dog"), _brain(new Brain) {
	for (int i = 0; i < 100; ++i) {
		_brain->idea[i] = "Dog idea";
	}
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(std::string name) : Animal(name), _brain(new Brain) {
	for (size_t i = 0; i < 100; i++)
		_brain->idea[i] = "Dog idea";
	std::cout << "Dog is created" << std::endl;
 }

Dog::Dog(const Dog &src) : Animal("Dog"), _brain(src._brain) {
	*this = src;
	std::cout << "Dog is copied" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog has been killed" << std::endl;
}

/* **************************************************************************** */
/*								   Operators									*/
/* **************************************************************************** */

Dog		&Dog::operator=(const Dog &f) {
	if (_brain)
		delete _brain;
	for (size_t i = 0; i < 100; i++) {
		_brain->idea[i] = f._brain->idea[i];
	}

	this->type = f.type;
	return *this;
}

/* **************************************************************************** */
/*								   function										*/
/* **************************************************************************** */

Brain const 	*Dog::getBrain() const {
	return _brain;
}

void	Dog::makeSound() const {
	std::cout << "Whoauf say the dog" << std::endl;
}