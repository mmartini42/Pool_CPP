// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

std::ostream	&operator<<(std::ostream &o, Form const &src);
class Form
{
private:
	std::string const	_name;
	int			const	_gradeSign;
	int			const	_gradeExec;
	bool				_signed;

public:
	int static const	maxGrade;
	int static const	minGrade;

	Form();
	Form(std::string const &name, int signedGrade, int execGrade);
	Form(Form const &src);
	virtual	~Form() {} ;

	std::string	getName() const { return _name; };
	int const	&getSignedGrade() const { return _gradeSign; };
	int const	&getExecGrade() const { return _gradeExec; };
	bool		&getSigned() { return _signed; };

	void	beSigned(Bureaucrat &bureaucrat);

	Form	&operator=(Form const &src);

	class GradeTooHighException: public std::exception
	{
	private:
		std::string	_msg;
	public:
		GradeTooHighException(Form const &f)
		{
			std::stringstream s;
			s << "grade is too high for " << f;
			_msg = s.str();
		}
		virtual const char	*what() const throw()
		{
			return _msg.c_str();
		}
		virtual	~GradeTooHighException() throw() {}
	};
	class GradeTooLowException: public std::exception
	{
	private:
		std::string	_msg;
	public:
		GradeTooLowException(Form const &f)
		{
			std::stringstream s;
			s << "grade is too low for " << f;
			_msg = s.str();
		}
		virtual const char	*what() const throw()
		{
			return _msg.c_str();
		}
		virtual ~GradeTooLowException() throw() {};
	};
};
