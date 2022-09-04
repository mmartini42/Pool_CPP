// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_ANIMAL_HPP
#define CPP_POOL_ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <iostream>

class AAnimal {
protected:
	std::string	type;

public:
	virtual ~AAnimal();

	void virtual	makeSound() const = 0;
	std::string		getType() const;

	AAnimal	&operator=( AAnimal const &f );
};

std::ostream	&operator<<( std::ostream &os, AAnimal const &f);


#endif //CPP_POOL_ANIMAL_HPP
