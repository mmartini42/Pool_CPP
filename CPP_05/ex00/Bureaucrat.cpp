// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 07/09/2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(_minGrade) {
	std::cout << "Constructor initialized" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string& name, uint32_t grade ) : _name(name), _grade(grade) {
	std::cout << "Constructor initialized" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat " << getName() <<" has been fired" << std::endl;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

uint32_t	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::setName( const std::string& name ) {
	this->_name = name;
}

void	Bureaucrat::setGrade( const uint32_t &grade ) {
	this->_grade = grade;
}

void	Bureaucrat::upGrade( uint32_t toAdd ) {
	uint32_t value = (toAdd - getGrade()) < 0 ?
			(getGrade() - toAdd) :
			(toAdd - getGrade());

	if (value < _maxGrade)
		throw GradeTooHighException();
	this->_grade -= toAdd;
}

void	Bureaucrat::downGrade( uint32_t toRemove ) {
	if (toRemove + getGrade() > _minGrade)
		throw GradeTooLowException();
	this->_grade += toRemove;
}

std::ostream	&operator<<( std::ostream &os, Bureaucrat const &src ) {
	os << "{Bureaucrat name : " << src.getName()
	<< " Bureaucrat grade : " << src.getGrade()
	<< " }" << std::endl;
	return os;
}
