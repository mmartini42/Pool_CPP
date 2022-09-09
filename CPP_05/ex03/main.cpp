
// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int main()
{
	try {
		Intern	intern;
		AForm	*form;
		form = intern.makeForm("ShrubberyCreationForm", "toutou");
		delete form;
		form = intern.makeForm("RobotomyRequestForm", "popo");
		delete form;
		form = intern.makeForm("PresidentialPardonForm", "coco");
		delete form;

		std::cout << std::endl;
		form = intern.makeForm("ShrubberyCreationForm", "toutou");
		Bureaucrat	boss("Lolo", 1);
		boss.signForm(*form);
		boss.executeForm(*form);
		boss.downGrade(150);
		boss.executeForm(*form);
		delete form;
	}
	catch (Intern::NotRightFormException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
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
