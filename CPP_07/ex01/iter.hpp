// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 12/09/2022.
//

#ifndef TEMPLATE_ITER_HPP
#define TEMPLATE_ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const *address, uint32_t size, void(*fun)(T const &src)) {
	for (uint32_t i = 0; i < size; i++) {
		fun(address[i]);
	}
}

#endif //TEMPLATE_ITER_HPP
