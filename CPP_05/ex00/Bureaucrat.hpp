// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#ifndef BUREAUCRAT_BUREAUCRAT_HPP
#define BUREAUCRAT_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
	std::string		_name;
	uint32_t		_grade;

public:
	Bureaucrat();
	Bureaucrat( const std::string& name, uint32_t grade );
	virtual ~Bureaucrat();

	static const uint32_t	_minGrade = 150;
	static const uint32_t	_maxGrade = 1;

	std::string 	getName() const;
	uint32_t 		getGrade() const;

	void	setName( std::string const& name );
	void	setGrade( uint32_t const& grade );


	void	upGrade( uint32_t toAdd );
	void	downGrade( uint32_t toRemove );


	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Bureaucrat has already max level";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Bureaucrat has already min level";
		}
	};
};

std::ostream	&operator<<( std::ostream &os, Bureaucrat const &src );

#endif //BUREAUCRAT_BUREAUCRAT_HPP
