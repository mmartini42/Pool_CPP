
// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	tryUpGrade(Bureaucrat bc, int grade)
{
	std::cout << "Begin: " << bc << std::endl;
	std::cout << "Trying to upGrade(" << grade << ")" << std::endl;
	try
	{
		bc.upGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "End: " << bc << std::endl << std::endl;
}

void	tryDownGrade(Bureaucrat bc, int grade)
{
	std::cout << "Begin: " << bc << std::endl;
	std::cout << "Trying to downGrade(" << grade << ")" << std::endl;
	try {
		bc.downGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "End: " << bc << std::endl << std::endl;
}

int main()
{
	try {
		Bureaucrat	boss("Boss", 10);
		Bureaucrat	random;

		AForm *form = new ShrubberyCreationForm("coco");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = new RobotomyRequestForm("top");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = new PresidentialPardonForm("zou");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		std::cout << "Downgrading " << boss << " by 50" << std::endl;
		boss.downGrade(50);
		std::cout << boss << std::endl;
		boss.executeForm(*form);
		delete form;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
