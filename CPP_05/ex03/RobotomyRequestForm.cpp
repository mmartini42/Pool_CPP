
// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int const	RobotomyRequestForm::_signGrade = 72;
int const	RobotomyRequestForm::_execGrade = 45;

RobotomyRequestForm::RobotomyRequestForm():
AForm("RobotomyRequestForm", false, _signGrade, _execGrade), _target("Default")
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
AForm(src), _target(src._target)
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("RobotomyRequestForm", false, _signGrade, _execGrade), _target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	srand(time(NULL));
	int randomNb = rand() % 2;
	std::cout << "Bzzzz bzzzz " << std::endl;
	std::cout << executor.getName() << " executes " << AForm::getName() << std::endl;
	if (randomNb)
		std::cout << executor.getName() << " has robotomized <" << _target << "> " << std::endl;
	else
		std::cout << "<" << _target << "> robotomization has failed" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	_target = src._target;
	return *this;
}
