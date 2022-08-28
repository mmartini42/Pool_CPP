//
// Created by mathis martini on 28/08/2022.
//

#include <iomanip>
#include <iostream>

int	main(void) {

	std::string const brain = "HI THIS IS BRAIN";

	std::string* const stringPTR = &brain;
	std::string& const stringREF = brain;

	std::cout << "string: " <<  &brain << " PTR: " << stringPTR << " REF: " << &stringREF << std::endl;
	std::cout << "string value: " << brain << " PTR value: " << *stringPTR << " REF value:" << stringREF << std::endl;

	return (0);
}