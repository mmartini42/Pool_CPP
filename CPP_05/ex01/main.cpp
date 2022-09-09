// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat boss("Boss", 10);
		Bureaucrat random;
		Bureaucrat John("John", 1);
		Bureaucrat Mike("Mike", 2);


		Form form("complicated form", 10, 20);
		std::cout << form << std::endl;
		std::cout << random << std::endl;
		std::cout << boss << std::endl;
		boss.signForm(form);
		random.signForm(form);
		std::cout << std::endl;

		Form cpyForm = form;
		std::cout << "copy of " << cpyForm << std::endl;
		if (cpyForm.getSigned())
			std::cout << "cpyForm is signed" << std::endl;
		std::cout << "Default try to sign the copy of " << cpyForm << std::endl;
		random.signForm(cpyForm);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}

	return (0);
}