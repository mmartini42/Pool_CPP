// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#include "ScavTrap.hpp"

/* **************************************************************************** */
/*								Constructor / Destructor						*/
/* **************************************************************************** */

ScavTrap::ScavTrap() : ClapTrap() {
	this->_name = "NoName";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << "Copy of Scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Scavtrap constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &f) {
	this->_name = f._name;
	this->_attackDamage = f._attackDamage;
	this->_energyPoints = f._energyPoints;
	this->_hitPoints = f._hitPoints;
	return (*this);
}

/* **************************************************************************** */
/*										Functions								*/
/* **************************************************************************** */

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attack " << target << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " I enterred in gate keeper mode" << std::endl;
}