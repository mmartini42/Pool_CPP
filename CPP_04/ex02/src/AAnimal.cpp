// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 04/09/2022.
//

#include "AAnimal.hpp"

AAnimal::~AAnimal() {
}

std::string	AAnimal::getType() const {
	return type;
}

AAnimal	&AAnimal::operator=(const AAnimal &f) {
	type = f.type;
	return (*this);
}
