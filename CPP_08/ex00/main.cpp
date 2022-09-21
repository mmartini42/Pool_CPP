// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 19/09/2022.
//

#include <array>
#include "easyfind.hpp"

int main() {
	std::array<int, 5>  arr = {42, 43, 42, 45, 46};

	try
	{
		std::cout << easyfind(arr, 42) << std::endl;
		std::cout << easyfind(arr, 45) << std::endl;
		std::cout << easyfind(arr, 6) << std::endl;
	}
	catch (::ElementNotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}