// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 09/09/2022.
//

#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		int static const	_signGrade;
		int static const	_execGrade;
		std::string			_fileName;
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string target);
		virtual	~ShrubberyCreationForm() {};

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);

		void	execute(Bureaucrat const &executor) const;
};
