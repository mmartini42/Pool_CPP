// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

#include <iostream>
#include <cmath>

void	doConversion(const std::string& value) {
	double	convert;

	if (value.length() == 1 && !isdigit(static_cast<int>(value[0])))
		convert = static_cast<double>(value[0]);
	else
		convert = atof(value.c_str());

	{
		//Display char
		if ((atoi(value.c_str()) == 0 && value.length() > 1)
			|| convert < std::numeric_limits<int>::min()
			|| convert > std::numeric_limits<int>::max()
			|| value == "nan") {
			std::cout << "char: impossible" << std::endl;
		} else if (convert < 32 || convert > 126) {
			std::cout << "char: Non displayable" << std::endl;
		} else
			std::cout << "char: " << static_cast<char>(convert) << std::endl;
	}

	{
		//Display int
		if (convert != convert || convert < std::numeric_limits<int>::min()
		 || convert > std::numeric_limits<int>::max()
		 || value == "nan")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(convert) << std::endl;
	}

	{
		//Display Float
		if (!fmod(convert, 1))
			std::cout << "float: " << static_cast<float>(convert) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(convert) << std::endl;
	}

	{
		//Display Double
		if (value == "nan")
			std::cout << "double nan" << std::endl;
		else if (!fmod(convert, 1))
			std::cout << "double: " << static_cast<double>(convert) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(convert) << std::endl;
	}

}

int main(int ac, char *av[]) {

	if (ac != 2) {
		std::cout << "Error ! ./convert <literal>" << std::endl;
		return EXIT_FAILURE;
	}
	doConversion(av[1]);

	return EXIT_SUCCESS;
}
