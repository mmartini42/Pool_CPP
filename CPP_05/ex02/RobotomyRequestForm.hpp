// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		int static const	_signGrade;
		int static const	_execGrade;
		std::string			_target;
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm(std::string target);
		virtual	~RobotomyRequestForm() {};

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);

		void	execute(Bureaucrat const &executor) const;
};
