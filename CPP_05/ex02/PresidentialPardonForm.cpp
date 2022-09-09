
// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//


#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int const	PresidentialPardonForm::_signGrade = 72;
int const	PresidentialPardonForm::_execGrade = 45;

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", false, _signGrade, _execGrade), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
	AForm(src), _target(src._target) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", false, _signGrade, _execGrade), _target(target) {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	std::cout << executor.getName() << " try to executes " << AForm::getName() << std::endl;
	AForm::execute(executor);
	std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	_target = src._target;
	return *this;
}
