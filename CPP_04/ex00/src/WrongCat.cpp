// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 02/09/2022.
//

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Constructor of WrongCat is here" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
	std::cout << "Copy of WrongCat is done" << std::endl;
}

WrongCat::WrongCat(const std::string name) : WrongAnimal(name) {
	std::cout << "Constructor of WrongCat is here" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat is destroy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &f) {
	this->_wrongType = f._wrongType;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "uoaiM Say the WrongCat" << std::endl;
}