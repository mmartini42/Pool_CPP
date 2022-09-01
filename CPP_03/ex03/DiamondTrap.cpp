//
// Created by mathis martini on 01/09/2022.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Unknown"){
	ClapTrap::setName(_name + "_clap_name");
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << _name << " Diamond default constructor called" << std::endl;
 }

 DiamondTrap::DiamondTrap(const std::string name) : _name(name) {
	ClapTrap::setName(name + "_clap_name");
	 this->_attackDamage = 30;
	 this->_energyPoints = 100;
	 this->_hitPoints = 100;
	 std::cout << _name << " Diamond default constructor called" << std::endl;
}

 DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	*this = src;
	std::cout << "Diamond copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond destructor called" << std::endl;
}

std::string	DiamondTrap::getName() const {
	return this->_name;
}

void	DiamondTrap::setName(const std::string& name) {
	this->_name = name;
}

void	DiamondTrap::whoAmI() {
	std::cout << "Hey I'm " << getName() << " My clap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &f) {
	this->_name = f._name;
	this->_hitPoints = f._hitPoints;
	this->_energyPoints = f._energyPoints;
	this->_attackDamage = f._attackDamage;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, DiamondTrap const &f){
	os << "{name : " << f.getName()
	<< " hit points : " << f.getHitPoints()
	<< " energy points : " << f.getEnergyPoints()
	<< " attack damage : " << f.getAttackDamage()
	<< std::endl;
	return os;
}