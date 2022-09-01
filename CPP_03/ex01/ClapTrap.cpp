// Copyright (c) 2022 mmartini42 <mathmart@42lyon.fr>.

//
// Created by mathis martini on 31/08/2022.
//

#include "ClapTrap.hpp"

/* **************************************************************************** */
/*								Constructor / Destructor						*/
/* **************************************************************************** */

ClapTrap::ClapTrap() :_name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor set name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

/* **************************************************************************** */
/*										Setter									*/
/* **************************************************************************** */

void	ClapTrap::setName(const std::string& name) {
	this->_name = name;
}

void	ClapTrap::setHitPoints(uint32_t hitPoint) {
	this->_hitPoints = hitPoint;
}

void	ClapTrap::setEnergyPoints(uint32_t energy) {
	this->_energyPoints = energy;
}

void	ClapTrap::setAttackDamage(uint32_t damage) {
	this->_attackDamage = damage;
}

/* **************************************************************************** */
/*										Getter									*/
/* **************************************************************************** */

std::string	ClapTrap::getName() const {
	return this->_name;
}

uint32_t	ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

uint32_t	ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

uint32_t	ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

/* **************************************************************************** */
/*										Functions								*/
/* **************************************************************************** */

void	ClapTrap::attack(const std::string &target) {
	std::cout << "Claptrap " + this->_name + " attack "
	<< target + ", causing " << getAttackDamage()
	<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(uint32_t amount) {
	std::cout << "Claptrap take " << amount << " amount of damage" << std::endl;

	if (amount > _energyPoints) {
		if (amount - _energyPoints < 0)
			_energyPoints = 0;
	}
	else
		setEnergyPoints(_energyPoints - amount);
	std::cout << "ClapTrap has " << getEnergyPoints() << " energy points" << std::endl;
}

void	ClapTrap::beRepaired(uint32_t amount) {
	std::cout << "Claptrap get " << amount << " of armor" << std::endl;

	if (amount > 10 && (amount + getEnergyPoints()) > 10){
		_energyPoints = 10;
		std::cout << "ClapTrap is now at its maximum points " << getEnergyPoints() << std::endl;
	}
	else{
		setEnergyPoints(getEnergyPoints() + amount);
		std::cout << "ClapTrap has now " << getEnergyPoints() << " energy points" << std::endl;
	}
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &f) {
	this->_name = f._name;
	this->_attackDamage = f._attackDamage;
	this->_energyPoints = f._energyPoints;
	this->_hitPoints = f._hitPoints;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, ClapTrap const &clap) {
	os << "{name : " << clap.getName()
	<< ", Hit Points : " << clap.getHitPoints()
	<< " Energy Points : " << clap.getEnergyPoints()
	<< " Attack Damage : " << clap.getAttackDamage()
	<< "}";
	return os;
}
