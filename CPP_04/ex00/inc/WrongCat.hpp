// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 01/09/2022.
//

#ifndef CPP_POOL_WRONGCAT_HPP
#define CPP_POOL_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat( std::string const name );
	WrongCat( WrongCat const &src );
	virtual ~WrongCat();

	void virtual	makeSound() const;

	WrongCat	&operator=( WrongCat const &f );
};

#endif //CPP_POOL_WRONGCAT_HPP
