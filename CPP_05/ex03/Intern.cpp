
// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int const	Intern::_formNb = 3;

Intern::Intern()
{
}
Intern::Intern(Intern const &src)
{
	*this = src;
}
Intern::~Intern()
{
}

AForm	*Intern::createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm	*Intern::createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm	*Intern::createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}
AForm	*Intern::makeForm(std::string formName, std::string target) const
{
	std::string forms[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm",
	};
	AForm *(*fun[3])(std::string str) = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidential,
	};
	for (int i = 0; i < _formNb; i++)
	{
		if (forms[i] == formName)
		{
			std::cout << "<Intern> creates " << formName << std::endl;
			return fun[i](target);
		}
	}
	throw Intern::NotRightFormException(formName);
	return NULL;
}

Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}
