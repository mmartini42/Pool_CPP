// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_DOG_HPP
#define CPP_POOL_DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain*	_brain;

public:
	Dog();
	Dog( Dog const &src );
	virtual ~Dog();

	Brain const	*getBrain() const;

	void virtual	makeSound() const;
	Dog		&operator=( Dog const &f );
};



#endif //CPP_POOL_DOG_HPP
