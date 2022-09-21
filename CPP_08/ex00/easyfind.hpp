// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 19/09/2022.
//

#ifndef EASY_EASYFIND_HPP
#define EASY_EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

class ElementNotFoundException : public std::exception {
public:
	ElementNotFoundException(){};
	virtual ~ElementNotFoundException() throw(){};
	virtual const char	*what() const throw() { return "Element not found"; };
};

template<typename T>
int		&easyfind(T &container, int toFind) {
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return *it;
	throw ElementNotFoundException();
}

#endif //TEMPLATE_EASYFIND_HPP
