//
// Created by mathis martini on 01/09/2022.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "NoFragName";
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) {
	this->_name = name;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Frag Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << "Frag copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Frag Destructor called" << std::endl;
};

FragTrap	&FragTrap::operator=(const FragTrap &f) {
	this->_name = f._name;
	this->_attackDamage = f._attackDamage;
	this->_hitPoints = f._hitPoints;
	this->_energyPoints = f._energyPoints;
	return (*this);
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " Give me a high five !" << std::endl;
}
