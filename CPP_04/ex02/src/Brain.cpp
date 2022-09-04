// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 03/09/2022.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain is created" << std::endl;
}

Brain::Brain(const Brain &src) {
	*this = src;
	std::cout << "Brain is copied" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain has been send to homer simpson #Destroy" << std::endl;
}

Brain	&Brain::operator=(const Brain &f) {
	for (size_t i = 0; i < 100; i++){
		idea[i] = f.idea[i];
	}
	return *this;
}

std::string const	*Brain::getIdea() const {
	return idea;
}

void	Brain::setIdea(const std::string *ideas) {
	for (int i = 0; i < 100; ++i) {
			idea[i] = ideas[i];
	}
}