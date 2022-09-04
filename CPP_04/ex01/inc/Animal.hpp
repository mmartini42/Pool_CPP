// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_ANIMAL_HPP
#define CPP_POOL_ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <iostream>

class Animal {
protected:
	std::string	type;

public:
	Animal();
	Animal( std::string witch );
	Animal( Animal const &src );
	virtual ~Animal();

	void virtual	makeSound() const;
	std::string		getType() const;

	Animal	&operator=( Animal const &f );
};

std::ostream	&operator<<( std::ostream &os, Animal const &f);


#endif //CPP_POOL_ANIMAL_HPP
