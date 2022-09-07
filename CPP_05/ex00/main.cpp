// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat	john;
	std::cout << "\n ################################################# \n" << std::endl;

	std::cout << john << std::endl;
	
	try {
		john.downGrade(10);
		std::cout << john << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Error At this rate John will become a goat" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "John is the boss" << std::endl;
	}

	std::cout << "\n ################################################# \n" << std::endl;

	Bureaucrat	mike("Mike", 1);

	std::cout << "\n ################################################# \n" << std::endl;
	std::cout << mike << std::endl;

	try {
		mike.upGrade(1);
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Stop or we are going to pay more Mike !!!" << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Now we can reduce his amount of salary" << std::endl;
	}
	std::cout << "\n ################################################# \n" << std::endl;

	Bureaucrat joseph;
	std::cout << "\n ################################################# \n" << std::endl;
	joseph.setName("joseph");
	joseph.setGrade(1);
	std::cout << joseph << std::endl;

	try {
		joseph.downGrade(10);
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Stop or we are going to pay more joseph !!!" << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		std::cout << "Now we can reduce his amount of joseph" << std::endl;
	}

	std::cout << "joseph is here" << std::endl;
	std::cout << joseph << std::endl;
	std::cout << "\n ################################################# \n" << std::endl;

	return (0);
}