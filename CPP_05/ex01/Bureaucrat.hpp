// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#ifndef BUREAUCRAT_BUREAUCRAT_HPP
#define BUREAUCRAT_BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <sstream>
#include <string>

class			Form;
class			Bureaucrat;
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);
class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	int static const	maxGrade;
	int static const	minGrade;

	Bureaucrat();
	Bureaucrat(std::string const &name, int const grade);
	Bureaucrat(Bureaucrat const &src);
	virtual	~Bureaucrat() {};

	std::string const	getName() const;
	int const			&getGrade() const;

	void	upGrade(int const grade);
	void	downGrade(int const grade);
	void	signForm(Form &form);

	Bureaucrat		&operator=(Bureaucrat const &src);

	class GradeTooHighException: public std::exception {
	private:
		std::string	_msg;
	public:
		GradeTooHighException(Bureaucrat const &b) {
			std::stringstream s;
			s << "grade is too high for " << b;
			_msg = s.str();
		}
		virtual const char	*what() const throw() {
			return _msg.c_str();
		}
		virtual	~GradeTooHighException() throw() {}
	};

	class GradeTooLowException: public std::exception {
	private:
		std::string	_msg;
	public:
		GradeTooLowException(Bureaucrat const &b) {
			std::stringstream s;
			s << "grade is too low for " << b;
			_msg = s.str();
		}
		virtual const char	*what() const throw() {
			return _msg.c_str();
		}
		virtual ~GradeTooLowException() throw() {};
	};
};


#endif //BUREAUCRAT_BUREAUCRAT_HPP
