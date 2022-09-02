// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_DOG_HPP
#define CPP_POOL_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog( std::string name );
	Dog( Dog const &src );
	virtual ~Dog();

	void virtual	makeSound() const;
	Dog		&operator=( Dog const &f );
};



#endif //CPP_POOL_DOG_HPP
