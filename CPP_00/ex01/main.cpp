#include <iostream>
#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	phoneBook;
	std::string	value;

	while (true)
	{
		std::cout << "ADD/SEARCH/EXIT > ";
		std::getline(std::cin, value);
		if (value == "EXIT" || std::cin.eof())
			return (0);
		else if (value == "ADD")
			phoneBook.add();
		else if (value == "SEARCH")
			phoneBook.search();
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}