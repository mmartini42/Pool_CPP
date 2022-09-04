// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 03/09/2022.
//

#ifndef CPP_POOL_BRAIN_HPP
#define CPP_POOL_BRAIN_HPP

#include "AAnimal.hpp"

class Brain {
public:
	Brain();
	Brain( Brain const &src );
	virtual ~Brain();

	std::string	idea[100];

	std::string const 	*getIdea() const ;
	void		setIdea( std::string const ideas[100] );

	Brain	&operator=( Brain const &f );
};

#endif //CPP_POOL_BRAIN_HPP
