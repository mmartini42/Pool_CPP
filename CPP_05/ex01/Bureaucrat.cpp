// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int const	Bureaucrat::maxGrade = 1;
int const	Bureaucrat::minGrade = 150;

Bureaucrat::Bureaucrat(): _name("Default"), _grade(minGrade) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade) {
	if (_grade < maxGrade)
		throw GradeTooHighException(*this);
	else if (_grade > minGrade)
		throw GradeTooLowException(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade) { *this = src; }

std::string	const	Bureaucrat::getName() const { return _name; }

int const	&Bureaucrat::getGrade() const { return _grade; }

void	Bureaucrat::upGrade(int const grade) {
	if (_grade - grade < maxGrade)
		throw GradeTooHighException(*this);
	_grade -= grade;
}

void	Bureaucrat::downGrade(int const grade) {
	if (_grade + grade > minGrade)
		throw GradeTooLowException(*this);
	_grade += grade;
}

void	Bureaucrat::signForm(Form &form)
{
	try	{
		form.beSigned(*this);
		std::cout << _name
				<< " signs "
				<< form.getName()
				<< " of signed grade "
				<< form.getSignedGrade()
				<< " and of execution grade "
				<< form.getExecGrade()
				<< std::endl;
	} catch (Form::GradeTooHighException &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src) {
	_grade = src._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src){
	o << ""
	<< src.getName()
	<< ", bureaucrat grade "
	<< src.getGrade()
	<< "";

	return o;
}












