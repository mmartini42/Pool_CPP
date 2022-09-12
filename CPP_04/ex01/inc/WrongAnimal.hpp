// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 02/09/2022.
//

#ifndef CPP_POOL_WRONGANIMAL_HPP
#define CPP_POOL_WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
protected:
	std::string	_wrongType;

public:
	WrongAnimal();
	WrongAnimal( WrongAnimal const &src );
	WrongAnimal( std::string const name );
	virtual ~WrongAnimal();

	void	makeSound() const;
	std::string		getWrongType() const;

	WrongAnimal	&operator=( WrongAnimal const &f );
};

#endif //CPP_POOL_WRONGANIMAL_HPP
