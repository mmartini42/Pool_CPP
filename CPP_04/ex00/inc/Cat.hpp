// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_CAT_HPP
#define CPP_POOL_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat( std::string const name );
	Cat( Cat const &src );
	virtual ~Cat();

	void virtual	makeSound() const;

	Cat		&operator=( Cat const &f );
};

#endif //CPP_POOL_CAT_HPP
