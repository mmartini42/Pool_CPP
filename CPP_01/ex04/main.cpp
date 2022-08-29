//
// Created by mathis martini on 29/08/2022.
//

#include <iomanip>
#include <fstream>
#include <iostream>

std::string	toReplace(std::string line, std::string toReplace, std::string toSet) {
	if (toReplace.empty())
		return line;

	std::string	newLine;
	size_t		index;

	while ((index = line.find(toReplace)) != std::string::npos) {
		newLine.append(line.substr(0, index).append(toSet));
		line.erase(0, index + toReplace.size());
	}

	newLine.append(line);
	return newLine;
}

void	openFile(std::string path, std::string s1, std::string s2) {
	std::ifstream file(path);

	if (!file.is_open()) {
		std::cerr << "Error fail to open " + path << std::endl;
		return;
	}

	std::ofstream newFile(path + ".replace");
	if (!newFile.is_open()) {
		newFile.close();
		std::cerr << "Error in creating file" + path + ".replace" << std::endl;
	}

	std::string	line;
	while (std::getline(file, line)) {
		newFile << toReplace(line, s1, s2);
		if (!file.eof())
			newFile << std::endl;
	}
	file.close();
	newFile.close();
}

int main(int ac, char **av) {
	if (ac == 4) {
		std::string fileName = av[1];
		std::string toReplace = av[2];
		std::string toSet = av[3];

		if (fileName.empty() || toReplace.empty())
			std::cerr << "Error cannot be empty" << std::endl;
		openFile(fileName, toReplace, toSet);
	}  else {
		std::cerr << "Need 3 args ./sed <filename> <stringToReplace> <stringToSet>" << std::endl;
	}
	return (0);
}